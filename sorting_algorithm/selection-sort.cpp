// smallest element are placed first
#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,4,1,6,3};
    int n=5;
    for(int i=0;i<n-1;i++){   // taking one element
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){  
            swap(arr[i],arr[j]);  // and swapping it if any other element is smaller than that element
        }
    }
    }
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
}