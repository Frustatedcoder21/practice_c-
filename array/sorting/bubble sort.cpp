
//bubble_sort
#include <iostream>

using namespace std;
void  bubble_sort(int arr[],int n)
{
    for(int i=n-2;i>=0;i--) // yeh loop har baar piche se ek element hataega jo ki largest element hoga
    {
        for(int j=0;j<=i;j++)     
        {
            if(arr[j]>arr[j+1]) // piche wala element bara hai age se toh phir swap krenge warna chill
            {
                swap(arr[j+1],arr[j]); // swap ho rha bhai log
            }
        }
    }
}

int main()
{  int n;
    cout<<"enter the length of array";
    cin>>n;
  int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n); //function call
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}