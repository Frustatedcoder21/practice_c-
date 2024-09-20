
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the sorted array"<<endl;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
   int left=0,right=n-1,mid;
   while(left<=right){
        mid=left+(right-left)/2;
       if(arr[mid]==key){
           cout<<mid;
           break;
       }
       else if(arr[mid]<key){
           left=mid+1;
       }else{
           right=mid-1;
       }
   }
   delete []arr;
  
}

    