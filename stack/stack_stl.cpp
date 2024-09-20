#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    
    cout << s.size() << endl;  // This will output the size of the stack
    cout << s.top() << endl;   // This will output the top element of the stack
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}
