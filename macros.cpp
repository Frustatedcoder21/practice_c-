#include<iostream>
using namespace std;
// object like macro
/*
#define pi 3.14
 int main()
 {  int r=5;
  double area= pi*(r)*(r);
  cout<<area;
 }*/
 
 
/*  chain like macro
 # define hello insta 
 # define insta 69
 int main ()
 { cout<<"I have "<<hello<<" followers";
 } */
 
 //function like macro
/*  # define area(l,b) l*b
  int main ()
  { int l=5,b=6;
   cout<<"area of dimension "<<l<<"x"<<b<<" is "<<area(l,b);
  } */
  //multi line macro
 # define ele 1,\
             4,\
             6
 int main()
 { int arr[]={ele},sum=0;
  for(int i=0;i<3;i++)
  { sum=sum+arr[i];
  } cout<<sum;
 }
  