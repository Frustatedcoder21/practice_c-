#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,1,6,3,4};
    int left_max[5]; // for storing left side max height building
    int right_max[5]; // for storing right side max height building
    int ans[5]; // for storing the volume of water
    int maxi=0;
    for(int i=0;i<5;i++){  // for getting the left most max height building
        maxi=max(arr[i],maxi);
        left_max[i]=maxi;
    }
    maxi=0;
    for(int i=4;i>=0;i--){ // for getting the right most max height building
    maxi=max(arr[i],maxi);
    right_max[i]=maxi;
    }
    for( int i=0;i<5;i++){  // traversing
        int min_height=min(left_max[i],right_max[i]); //  calculating the min of left and right max building because water will store only till the minimum height of both
        if(arr[i]>min_height){  // the building is more than the minimum of two
            ans[i]=0;  // zero water will store
        }else{
            ans[i]=min_height-arr[i]; // else the height difference
        }
    }
    for(int i=0;i<5;i++){
        cout<<ans[i]<<" ";
    }
}