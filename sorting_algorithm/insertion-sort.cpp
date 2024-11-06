// put place in correct place by swapping 
#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,1,4,2,7};
    int n=5;
    for(int i=1;i<n;i++){ // i start from  because to compare 1 from zero if it will zero then there will no one to compare with
    for(int j=i;j>0;j--){   
    if(arr[j]<arr[j-1]){  
        swap(arr[j],arr[j-1]);
    }else{
        break;
    }
    }
    }
     for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
}