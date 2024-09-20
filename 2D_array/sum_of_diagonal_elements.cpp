#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{2,22,2},{3,5,6}};
    int sum=0;
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i==j){ // for primary diagonal row_index == column_index;
            sum+=arr[i][j];
        }
        }
       
        }
        cout<<"primary diagonal sum -->"<<sum<<"\n";
        sum=0;
         for(int i=0;i<3;i++){
    for(int j=2;j>=0;j--){
        if(i+j==2){  //for secondary diagonal row_index+column_index = number of row ;
            sum+=arr[i][j];
        }
        }
       
        }
        cout<<"secondary diagonal sum -->"<<sum<<"\n";
        
        
    }
   