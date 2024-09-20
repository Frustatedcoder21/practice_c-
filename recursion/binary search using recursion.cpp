//binary_search using recursion
#include<iostream>
using namespace std;
bool binary_search( int arr[],int s,int e,int key)
{ int mid=s+(e-s)/2;
    if(s>e)
{
    return false;
    
}
if(arr[mid]==key)
{ return true; }

if(arr[mid]>key)
{  return binary_search(arr,s,mid-1,key);}
else {return binary_search(arr,mid+1,e,key);}
    
    
}
int main()
{ int s=0,e=5,key=1;
 


    int arr[5]={1,2,3,4,6};
    
    int ans=binary_search(arr,s,e,key);
    if(ans)
    {
        cout<<"true";
    }
    else { cout<<"false";}
    
}