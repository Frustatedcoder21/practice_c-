#include<iostream>
using namespace std;
void reverse_array(int arr[], int size)
{ int arr1[100],k=0;
cout<<"original array"<<" ";

for(int i=0;i<=size-1;i++)
{  cout<<arr[i];}

    for(int i=size-1;i>=0;i--)
{ arr1[k]=arr[i];
k++;
}cout<<endl <<"reversed array :)"<< " ";
    for(int i=0;i<size;i++)
    { cout<<arr1[i]<<" ";
}}
int main()
{ int size,arr[100];
 cout<<"Enter the size";
 cin>>size;
 for(int i=0;i<size;i++)
 { cin>>arr[i];
 }
 reverse_array(arr,size);
}