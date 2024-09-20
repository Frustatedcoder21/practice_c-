
#include <iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int  j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        
        if(i<j)
        swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(int arr[],int low,int high){
    
    if(low<high){
        int pivot= partition(arr,low,high);
        qs(arr,low,pivot);
        qs(arr,pivot+1,high);
    }
}
 
int main()
{ 
    int arr[5]={3,1,2,5,4};
    qs(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
}