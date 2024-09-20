
#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(arr[left]>=arr[right]){
            temp.push_back(arr[right]);
            right++;
        }else{
            temp.push_back(arr[left]);
            left++;
        }
    }
    while(left<=mid){
         temp.push_back(arr[left]);
            left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
            right++;
    }
    int i=low,v=0;
    while(i<=high){
        arr[i]=temp[v];
        v++;
        i++;
    }
}

void merge_sort(int arr[],int low,int high){
    if(low>=high)
    return;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int arr[5]={2,1,5,3,4};
    merge_sort(arr,0,4);
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}