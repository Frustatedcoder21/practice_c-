// arranging in ascending order
#include<iostream>
#include<vector>
using namespace std;
// this arrange the elements and return the pivot
int partition(vector<int>&v,int low,int high){
    int pivot=v[low];
    int i=low;
    int j=high;
    while(i<j){
        while(v[i]<=pivot && i<=high-1){ // if element on the left is less than equal to  pivot move ahead the pointer
            i++;
        }
        while(v[j]>pivot && j>=low+1){ //  if element on the right is greater than pivot move behind the pointer 
            j--;
        }
        if(i<j) // swap if they didn't cross each other
        swap(v[i],v[j]);
        
    }
    swap(v[low],v[j]);  // put the pivot in correct position
    return j; // return parition position
}

void quick_sort(vector<int>&v,int low,int high){
    if(low<high){ // run only if more than 1 element
        int partition_index=partition(v,low,high); // create partition and move the pivot element in correct place
        quick_sort(v,low,partition_index-1); // do for the left side
        quick_sort(v,partition_index+1,high); // do for the right side
    }
}
int main(){
    vector<int>v={2,4,1,3,8};
    quick_sort(v,0,v.size()-1);
    for(int it:v)
    cout<<it;
}