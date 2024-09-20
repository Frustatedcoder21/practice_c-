
#include <bits/stdc++.h>
using namespace std;
double mean(int arr[],int n){
     double sum=0.0,avg=0.0;
  for(int i=0;i<n;i++){
      sum+=arr[i];
      
  }
  avg=sum/n;
  return avg ;
}
double median(int arr[],int n){
    sort(arr,arr+n);
    double med=0.0;
    if(n%2!=0){
        med=arr[(n)/2];
        
        
    }else{
        med=(arr[n/2-1]+arr[n/2])/2;
        
    }
    return med;
}
int mode(int arr[],int n){
    map<int,int>freq;
    int r,max_freq=0;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(max_freq<freq[arr[i]]){
            max_freq=freq[arr[i]];
            r=arr[i];
        }
       
    } return r;
}
int main()
{
  int n;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
 
  cout<<mean(arr,n)<<endl;
  cout<<median(arr,n)<<endl;
  cout<<mode(arr,n);
}