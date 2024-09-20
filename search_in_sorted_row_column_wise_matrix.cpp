// search_in_sorted_row_column_wise_matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>matrix(4,vector<int>(4));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++){
            cin>>matrix[i][j];
        }
    }
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++){
            cout<<matrix[i][j];
        } cout<<endl;
    } int target;
    cin>>target;
    int i=0,j=3;
    while(i<4 && j>=0){
      if(matrix[i][j]==target){
          cout<<"element found";
          return 0;
      }else if(matrix[i][j]<target){
           i++;
      }else{
          j--;
      }
        
    } cout<<"element not found";
    }
