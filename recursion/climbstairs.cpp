//ways of climbing stairs by taking either 1 or 2 steps 
#include<iostream>
using namespace std;
int climbstairs(int src,int dest)
{  int val;
    if(dest<0)
 { return 0;}
  if(dest==0)
{ return 1; }
 val= climbstairs(src+1, dest)+climbstairs(src+2, dest);
    return val;
}
 int main()
 { int src=0,dest;
     cin>>dest;
    cout<< climbstairs(src,dest);
 }
    