//fibonacci using recursion
#include<iostream>
using namespace std;
int fibo(int n)
{  int val;
    if(n==0)
 { return 0;}
  if(n==1)
{ return 1; }
 val=fibo(n-1)+fibo(n-2);

    return val;
}
 int main()
 { int n;
     cin>>n;
    cout<< fibo(n);
 }
    