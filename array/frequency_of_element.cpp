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
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }
    
}