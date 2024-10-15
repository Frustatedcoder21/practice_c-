#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    Node* top;
    int size;
    
    public:
    Stack(){
        top = NULL;
        size = 0;
    }

    void push(int data){
        Node* temp = new Node(data);
        if(temp == NULL){
            cout << "Stack Overflow\n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;  // Increment the size here
        cout << top->data << " pushed into the stack\n";
    }

    void pop(){
        if(top == NULL){
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        cout << top->data << " popped out of the stack\n";
        top = top->next;
        delete temp;
        size--;  // Decrement the size when popping
    }

    int peek(){
        if(top == NULL){
            return -1;  // Return -1 when the stack is empty
        } else {
            return top->data;
        }
    }

    bool isEmpty(){
        return top == NULL;
    }

    int getSize(){
        return size;  // Return the correct size of the stack
    }
};

int main(){
    Stack s;
    s.push(5);
    s.push(10);
    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    cout << "Stack size is: " << s.getSize() << endl;
    return 0;
}
