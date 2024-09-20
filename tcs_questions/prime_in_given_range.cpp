
#include <iostream>
using namespace std;
int main()
{  int minm,maxm,sum=0;
  cout<<"Enter the minm range";
  cin>>minm;
  cout<<"Enter the maxm range";
  cin>>maxm;
    for(int i=minm;i<=maxm;i++){
        int count=0;
       for(int k=2;k<i;k++){
           if(i%k==0){
               count++;
           }
       }
       if(count==0){
           cout<<i<<endl;
       }
    }
}