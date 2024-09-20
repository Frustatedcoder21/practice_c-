/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>

using namespace std;

int main()
{
  // vector<int> v(5);// creates a vector of size 5
   vector<int> v;// creates a vector of size 5 with all elements 10
   for(int i=0;i<5;i++)
   v.push_back(i); // pushing element in vector
   for(int j=0;j<5;j++)
   cout<<v[j]<<endl;
   vector<int>::iterator it=v.begin(); //v.begin returns the begining address of the vector element
   cout<<*(it)<<endl;
   for(auto it=v.begin();it!=v.end();it++)
   { cout<<*(it);}
   v.erase(v.begin()); // erase is used to delete the element
   cout<<endl;
   for(auto it=v.begin();it!=v.end();it++)
   { cout<<*(it);}
   v.erase(v.begin(),v.begin()+2);
   cout<<endl;
   for(auto it=v.begin();it!=v.end();it++) // auto automatically recognizes the data type of a variable
   { cout<<*(it);}
   v.insert(v.begin(),1);
    cout<<endl;
   for(auto it=v.begin();it!=v.end();it++)
   { cout<<*(it);} 
   v.pop_back();
   cout<<endl;
   for(auto it=v.begin();it!=v.end();it++)
   { cout<<*(it);} 
   cout<<endl;
   cout<<v.size();
    
   
   
   
   }