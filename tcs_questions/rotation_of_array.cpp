
#include <iostream>
#include<algorithm>
#include<iterator>
#include<vector> 
using namespace std;
void rotate(vector<int>&v,int k){
    int last=v[v.size()-1];
    for(int i=v.size()-2;i>=0;i--){
        v[i+1]=v[i];
    }
    v[0]=last;
}

int main()
{ 
  vector<int>v;
  int size;
  cin>>size;
  for(int i=0;i<size;i++){
      int ele;
      cin>>ele;
      v.push_back(ele);
  }
  int k;
  cout<<"Enter the time of rotation";
  cin>>k;
  for(int j=1;j<=k;j++){
      rotate(v,k);
  }
  
  for(int i=0;i<v.size();i++){
      cout<<v[i];
  }
  
  
    
}
