#include<iostream>
#include<algorithm>
using namespace std;

// <------------------------------------------------------My way-------------------------------------------------------->
void rotate(int arr[],int index,int size,int val){
    
   if(index==size){
       return;
   }
   if(index==0){
       val=arr[0];
        arr[index]=arr[index+1];
      
   }else if(index==size-1){
       
       arr[index]=val;
       
       
   }else{
       arr[index]=arr[index+1];
      
       
   }
    rotate(arr,index+1,size,val);
}
// <------------------------------------------------------- more beautiful way ------------------------------------------------->
void rotate(int arr[], int index, int size) {
    if (index == size - 1) { // Base case: when index reaches the last element
        return;
    }
    swap(arr[index], arr[index + 1]); // Swap current element with the next one
    rotate(arr, index + 1, size); // Recursive call to process the next element
}
int main(){
    int arr[5]={10,2,4,1,3};
   rotate(arr,0,5,0);
   for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
   
}