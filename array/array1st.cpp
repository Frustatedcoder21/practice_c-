#include<iostream>
using namespace std;
void printarr(int arr[],int size)
{ for(int i=0;i<size;i++)
 { cout<<arr[i];
 }}
 int main ()
 { int arr[5]={0},size;
  cout<<"Enter the size of array";
  cin>>size;
  for(int i=0;i<size;i++)
  { cin>>arr[i];
  } printarr(arr,size);
     
 }