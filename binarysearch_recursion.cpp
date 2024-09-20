#include<iostream>
using namespace std;
int binary_search(int arr[],int start,int end,int key){
int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
         return binary_search(arr,start,mid-1,key);
    }else{
        return binary_search(arr,mid+1,end,key);
    }
}
int main(){
    int arr[5]={1,5,7,9,12};
    cout<<binary_search(arr,0,4,12);
}