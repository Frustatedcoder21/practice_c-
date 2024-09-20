//power  using recursion
#include<iostream>
using namespace std;
//less optimised
/*int power(int a,int b)
{  
    
    if(b==0)
    {return 1;}
    int mult= a*power(a,b-1);
    return mult;
}*/
//more optimised
int power(int a, int b)
{
     if(b==0)
     {
          return 1;
     }
     if(b==1)
     { return a; }
      if(b%2==0)
      {
          return power(a,b/2)*power(a,b/2);
      }
      else {
          return  a*power(a,b/2)*power(a,b/2);
      }
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<power(a,b);
}