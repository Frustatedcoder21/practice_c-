#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{2,5,3},{3,5,6}};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
      for(int i=0;i<3;i++){
        int start=0,end=2;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    cout<<"\n\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        
    }
  
    
   