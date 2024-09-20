/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<stack>

using namespace std;

int main()
{
  stack<int>s ;
  s.push(1);
  s.push(2);           // Stack follows lifo //
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.pop();
  cout<<s.top(); //top tells the last element inserted in a Stack
  cout<<s.size(); // tells the size of stack
  cout<<s.empty();//  tells whether the Stack is empty or not
  
   
   }