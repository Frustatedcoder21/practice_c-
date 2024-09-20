// sum of n numbers using parametized recursion *;
#include <iostream>

using namespace std;

 void add( int i,int sum){
     if(i<1){
         cout<<sum;
         return;
     }
     
      add(i-1,sum+i);
   }

int main()
{ int n,sum=0;
 cin>>n;
 cout<<"<-------------------------------------add------------------------------------------>"<<endl;
    add(n,sum);

    return 0;
}