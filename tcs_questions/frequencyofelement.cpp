
#include <iostream>
#include<algorithm>
#include<map>
#include<iterator>
using namespace std;

int main()
{ 
  int n;
  cin>>n;
  int arr[1000]={0};
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  map<int,int>mp;
  for(int k=0;k<n;k++){
      mp[arr[k]]++;
  }
  for(auto it:mp){
      cout<<it.first<<"->"<<it.second<<endl;
  }
  
  
    
}
