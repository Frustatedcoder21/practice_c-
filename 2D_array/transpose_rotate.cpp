
#include <iostream>
using namespace std;
int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3},{3,4, 5,6}};
     cout<<"Before Transpose:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }
    cout<<"After Transpose:"<<endl;
    int arr1[4][4]={0};
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           arr1[j][i]=arr[i][j];
        } 
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr1[i][j]<<" ";
        } cout<<endl;
    }
    cout<<"Before Rotate:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }
    cout<<"After Rotate:"<<endl;
    int arr2[4][4]={0};
    for(int i=0;i<4;i++){
        int k=3;
        for(int j=0;j<4;j++){
           arr2[k][i]=arr[i][j];
           k--;
        } 
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr2[i][j]<<" ";
        } cout<<endl;
    }
    
}