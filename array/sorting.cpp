//sorting
#include <iostream>
using namespace std;
void sort(int arr[],int size)
{ 
    for(int i=0;i<size-1;i++)
{ if(arr[i]>arr[i+1]){
 swap(arr[i],arr[i+1]);
 
}}
for(int j=0;j<size;j++)
 cout<<arr[j];
}

int main()
{ int arr[100],size;
 cin>>size;
 for(int i=0;i<size;i++)
 { cin>>arr[i];
 }
    sort(arr,size);
    
}


