
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{ 
  int n;
  cin>>n;
  int arr[1000]={0};
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int start=0,end=n-1;
  while(start<end){
      swap(arr[start],arr[end]);
      start++;
      end--;
  }
  for(int i=0;i<n;i++){
      cout<<arr[i];
  }
  
  
    
}
