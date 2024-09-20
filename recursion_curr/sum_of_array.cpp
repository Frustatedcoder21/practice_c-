#include<bits/stdc++.h>
using namespace std;

void total(int arr[],int index,int sum, int size){
    if(index==size){
        cout<<sum;
        return;
    }
    total(arr,index+1,sum+arr[index],size);
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Initial call to the recursive function
    total(arr, 0, 0, size);
    
    return 0;
}
