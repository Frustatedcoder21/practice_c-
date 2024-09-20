/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;


int main()
{  string str;
 string s1="hello", s2="world", str2, str3="786";int x;
 
  getline(cin,str);
   cout<<str<<endl;
   cout<<s1+" "+s2<<endl;
   if( s1.compare(s2)==0)
   {
       cout<<"equal"<<endl;}
       else cout<<"not equal"<<endl;
       str.push_back('s');
       cout<<str<<endl;
       str2= str.substr(2,3);
       cout<<str2<<endl;
       x=stoi(str3);
       cout<<x+2;
       
       
       
   }
   
  
