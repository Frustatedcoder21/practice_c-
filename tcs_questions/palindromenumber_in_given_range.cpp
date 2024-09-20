
#include <iostream>
using namespace std;
int main()
{  int minm,maxm,sum=0;
  cout<<"Enter the minm range";
  cin>>minm;
  cout<<"Enter the maxm range";
  cin>>maxm;
    for(int i=minm;i<=maxm;i++){
        int num=i;
        sum=0;
        while(num>0){
            int temp=num%10;
            sum=sum*10+temp;
            num=num/10;
        }
        if(i==sum){
            cout<<i<<endl;
        }
    }
}