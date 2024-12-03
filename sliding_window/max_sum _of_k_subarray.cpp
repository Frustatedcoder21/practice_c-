// max_sum of k size subarray
#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,10,3,7,4};
     int sum=0;
    int n=5,k;
    cin>>k;
  int i=0;
  while(i<k){
                  // first calculate the sum;
      sum=sum+arr[i];
      i++;
  }
 int  max_sum=sum;
  for(int j=k;j<n;j++){
// subtract first element and add the last new element      
      sum=sum+arr[j]-arr[j-k];
      max_sum=max(max_sum,sum);
  }
  cout<<max_sum;
  
    
}