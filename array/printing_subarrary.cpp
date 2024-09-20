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
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }cout<<endl;
        }  
    }

     
}