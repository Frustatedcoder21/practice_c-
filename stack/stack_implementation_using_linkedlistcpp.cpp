
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int value){
        data=value;
        next=NULL;
    }
};
class stack{
    public:
    node* top;
    int size;
    stack(){
        top=NULL;
        size=0;
    }
    void push(int value){
        node * temp=new node(value);
        temp->next=top;
        top=temp;
        size++;
    }
    void pop(){
        if(top==NULL){
            cout<<"stack underflow\n";
        }else{
            node * temp=top;
            top=top->next;
            cout<<temp->data<<" is poped\n";
            delete temp;
            size--;
        }
    }
    void peek(){
    if(top==NULL){
            cout<<"stack is empty\n";
        }else{
            cout<<top->data<<" is top elememt\n";
        }
        
    }
    
    
};

int main()
{ stack s1;
 s1.push(1);
 s1.push(2);
 s1.push(3);
 s1.peek();
 //s1.Issize();
 s1.pop();
 s1.peek();
 // s1.Issize();

 
}