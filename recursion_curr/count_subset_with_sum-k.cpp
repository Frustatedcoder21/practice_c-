#include<iostream>
#include<vector>
using namespace std;

int add_subsequence(int arr[],int index,int n, int sum){
    if(index==n){
        
        return sum==0;
    }
    
   return add_subsequence(arr,index+1,n,sum)+add_subsequence(arr,index+1,n,sum-arr[index]);
    
}
int main(){
    int arr[3]={1,0};
    cout<<add_subsequence(arr,0,2,0);
    
    
}