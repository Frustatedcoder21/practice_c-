//bubble sort using recursion
#include<iostream>
using namespace std;
void  bubble_sort(int arr[],int size)
{ if(size==0||size==1)
{ return; }
for(int i=0;i<size-1;i++)
{
    if(arr[i]>arr[i+1])
    {
        swap(arr[i],arr[i+1]);
    }
    bubble_sort(arr,size-1);
}

}
int main(){
    int arr[5]={1,7,3,5,2},size=5;
    
    bubble_sort(arr,size);
    for(int i=0;i<size;i++)
    {cout<<arr[i];}
}