#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(5);
    s.push(10);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
}