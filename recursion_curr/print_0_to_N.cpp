
#include <iostream>
using namespace std;

void print(int n,int k)
{
 if(k==n){ //Base case
  cout<<k;
  return;
     
 }
  cout<<k<<endl;
  print(n,k+1);
    
}



int main()
{
    print(6,1);
}