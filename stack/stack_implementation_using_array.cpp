
#include <iostream>
using namespace std;
class Stack{
    int *arr;  // dynamically allocated array
    int top;  // top element pointer
    int size;  //size of the stack 
    public:
    Stack(int s){   // first initialisation
        size=s;
        top=-1;
        arr=new int[s];
    }
    void push(int val){  
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }else{
            top++;  // increase then push 
            arr[top]=val;
            cout<<val<<" pushed into the stack"<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }else{
            cout<<arr[top]<<" poped out from the stack"<<endl;
            top--;  // don't have to delete the element just move back top
        }
    }
    int peek(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }else
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
    int isSize(){
    return top+1;
    }
};
int main()
{
    Stack s(5);
    s.push(4);
    s.push(6);
    s.push(2);
    s.pop();
    s.pop();
    s.pop();
    cout<<s.isEmpty();
    if(s.isSize()>0) // peek should be check if  the array is not empty to avoid the clash if negative number is present
    cout<<s.peek();
    
}