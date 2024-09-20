#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[],int start,int end,int key){
  
   
    if(start>end){
        return false;
    } 
    int mid=start+(end-start)/2;
     if(arr[mid]==key){
        return true;
    }
    return arr[mid]>key?binary_search(arr,start,mid-1,key):binary_search(arr,mid+1,end,key);
}

int main(){
    int arr[5]={2,5,7,9,10};
    int start=0,end=4;
    int key;
    cin>>key;
    cout<<binary_search(arr,start,end,key);
}