/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
     string s;
     getline(cin,s);  // here getline is used instead of cin so that we can take space in input
     cout<<s<<endl;;
     cout<<s.size()<<endl;
     string s1="HELLO";
     string s2="WORLD";
   
     string s3=s1+" "+s2; // s3=s1.append(s2);
     cout<<s3<<endl;
     
     s1.push_back('s');
     cout<<s1<<endl;
     string s4="Hello \"World\"";  // here the backslash say ignore me and just print one character after me
     cout<<s4;
}