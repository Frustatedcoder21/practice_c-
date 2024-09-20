#include<iostream>
using namespace std;
void fibonaaci(int n)
{ int a=0,b=1,sum=0;
 cout<<a<<b;
 for(int i=1;i<=n;i++)
 { sum=a+b;
 a=b;
   b=sum;
   cout<<sum;
 }}
 int main(){
     int n;
     cin>>n;
     cout<<"fibonaaci series upto nth term"<<endl;
     fibonaaci(n);
 }
 
 