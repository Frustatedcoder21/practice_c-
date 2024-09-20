// sum of n numbers using functional  recursion *;
#include <iostream>

using namespace std;

 int add( int i){
     if(i==0){
         return 0;}
        else 
        {return i+add(i-1);}
        
        
     }
     
      
   

int main()
{ int n,sum=0;
 cin>>n;
 cout<<"<-------------------------------------add------------------------------------------>"<<endl;
     
    cout<< add(n);

    return 0;
}