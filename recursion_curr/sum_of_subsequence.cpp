#include<iostream>
#include<vector>
using namespace std;

void add_subsequence(int arr[],int index,int n, int sum){
    if(index==n){
        cout<<sum<<endl;
        return;
    }
    
    add_subsequence(arr,index+1,n,sum);
    sum+=arr[index];
    add_subsequence(arr,index+1,n,sum);
}
int main(){
    int arr[3]={1,2,3};
    add_subsequence(arr,0,3,0);
    
    
}