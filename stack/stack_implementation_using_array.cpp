
#include <iostream>
using namespace std;
class stack{
    int *arr ,size,top;
    public:
    stack(int s){
        size=s;
        top=-1;
        arr=new int[size];
    }
    void push(int ele){
         if(top==size-1){
             cout<<"stack overflow\n";
         }else{
         
             arr[++top]=ele;
             cout<<ele<<" is pushed\n";
         }
         
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow\n";
        }else{
            
            cout<<arr[top]<<" is poped\n";
            top--;
        }
    }
    void peek(){
        if(top==-1){
            cout<<"stack is empty\n";
        }
        cout<<arr[top]<<" is top element\n";
    }
    void Issize(){
        cout<<top+1<<" is the size of the stack\n";
    }
};

int main()
{ stack s1(5);
 s1.push(1);
 s1.push(2);
 s1.push(3);
 s1.peek();
 s1.Issize();
 s1.pop();
 s1.peek();
  s1.Issize();

 
}