// sorting the largest element first with adjacent swaps
#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,1,6,3,4};
    int n=5;
    for(int i=n-2;i>=0;i--){  //for placing the largest element
        for(int j=0;j<=i;j++){  // on every end of this loop largest element will be placed last
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
