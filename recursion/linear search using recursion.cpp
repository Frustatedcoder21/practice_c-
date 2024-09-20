//linear_search using recursion
#include<iostream>
using namespace std;
bool linear_search( int arr[],int size,int key)
{ 
 if( size==0 )
 {
     return false  ;
 }
    if(arr[0]==key)
    {
        return true;
        
    }
     return linear_search(arr+1,size-1,key);
   
    
    
}
int main()
{ int size,key;
cin>>key;

    int arr[5]={1,2,3,4,5};
    size=5;
    int ans=linear_search(arr,size,key);
    if(ans)
    {
        cout<<"true";
    }
    
}