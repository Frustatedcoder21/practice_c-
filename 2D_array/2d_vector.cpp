#include<bits/stdc++.h>
using namespace std;
int main(){
  
  vector<vector<int> >matrix(4,vector<int>(3,1));
  for(int i=0;i<4;i++){
      for(int j=0;j<3;j++){
          cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
  }
  cout<<"column= "<<matrix[0].size()<<endl;
  cout<<"row= "<<matrix.size();
    }
  
    
   