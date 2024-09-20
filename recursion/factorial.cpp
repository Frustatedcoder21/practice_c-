// factorial  using functional  recursion *;
#include <iostream>

using namespace std;

 int fact( int i){
     if(i==0){
         return 1;}
        else 
        {return i*fact(i-1);}
        
        
     }
     
      
   

int main()
{ int n,sum=0;
 cin>>n;
 cout<<"<-------------------------------------add------------------------------------------>"<<endl;
     
    cout<<fact(n);

    return 0;
}