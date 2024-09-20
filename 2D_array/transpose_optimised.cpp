//transpose 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[4][4]={{1,2,3,4},{5,8,9,2},{0,4,3,2},{4,5,6,7}};
  
for(int i=0;i<4;i++){
    for(int j=0;j<i;j++){
        swap(arr[i][j],arr[j][i]);
    }
}for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j];
    } cout<<endl;
}

}
  
    
   