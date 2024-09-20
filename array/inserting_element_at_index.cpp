#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     vector<int>arr(n);
    for(int i=0;i<n;i++){ //take input elements
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){ // printing array
        cout<<arr[j]<<" ";
    }
    cout<<endl;
     int index;
     cin>>index;
     int val;
     cin>>val;
     arr.resize(n+1);
     for(int j=n;j>index;j--){ // shifting elements from back side
         arr[j]=arr[j-1];
         
     }
     arr[index]=val;
         for(int j=0;j<=n;j++){ // printing array
        cout<<arr[j]<<" ";
    }

     
}