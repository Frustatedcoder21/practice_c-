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
    int sum=0,maxsum=INT_MIN;
    int start = 0, end = 0, tempStart = 0; // Variables to track indices
    for(int i=0;i<n;i++){
        sum+=arr[i];
        start=tempStart;
        end=i;
        maxsum=max(sum,maxsum);
        if(sum<0){ // if running sum is negative then it will only lead to decrease in sum
            sum=0; // so reset sum to zero
            tempStart=i+1;
        }
    }
    cout<<maxsum<<endl<<start<<endl<<end;


     
}