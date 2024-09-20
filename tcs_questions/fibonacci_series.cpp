
#include <iostream>
using namespace std;
int main()
{  int n;
cin>>n;
   int fibo[1000]={0};
   fibo[0]=0,fibo[1]=1;
   cout<<fibo[0]<<endl<<fibo[1]<<endl;
   for(int i=2;i<n;i++)
   {
       fibo[i]=fibo[i-1]+fibo[i-2];
       cout<<fibo[i]<<endl;
   }
   
  
}