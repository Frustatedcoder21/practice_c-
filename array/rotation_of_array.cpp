#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int *arr=new int [n];
    for(int i=0;i<n;i++){ //take input elements
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){ // printing array
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    int k; // number of rotation
    cin>>k;
    k=k%n; // 
    int *temp=new int[k]; //temporary array
    for(int i=0;i<k;i++){
        temp[i]=arr[i]; //storing value in temporary array
    }
    for(int l=k;l<=n-1;l++){
        arr[l-k]=arr[l];  // shifting elements by k
    }
    int count=0;
   for(int z=n-k;z<n;z++){ //now putting the value value back of array
       arr[z]=temp[count];
       count++;
   }
   for(int j=0;j<n;j++){   // printing the array back
        cout<<arr[j]<<" ";
    }
    
}