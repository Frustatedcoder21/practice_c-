#include<iostream>
#include<queue>
using namespace std;

int main()
{ queue<int>q;    //it follows fifo
q.push(1);
q.push(2);
q.push(3);
cout<<"top element"<<q.front()<<endl; //first element will show here
q.pop(); //first element will pop first
cout<<"top element"<<q.front();
}