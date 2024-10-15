#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s; // creating stack using stl
    s.push(5); // pushing element in the stack
    s.push(10);
    cout<<s.top()<<endl;  // prints the top element
    cout<<s.size()<<endl; // prints the size of the stack
    s.push(21);  
    s.pop(); // pushesh out the top element
    cout<<s.empty()<<endl;  // return true or false whether the stack is empty or not
}