#include<iostream>
#include<stack>
using namespace std;

int main()
{ stack<int>s;    //it follows lifo
s.push(1);
s.push(2);
s.push(3);
cout<<"top element"<<s.top()<<endl; //last element will show here
s.pop(); //last element will pop first
cout<<"top element"<<s.top();
}