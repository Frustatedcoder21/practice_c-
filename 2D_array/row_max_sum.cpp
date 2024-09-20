#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3]={{1,2,3},{2,22,2}};
    int sum=0,max_sum=INT_MIN,max_row;
    for(int i=0;i<2;i++){
        sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>max_sum){
            max_sum=sum;
            max_row=i;
        }
    }
    cout<<"row with max sum = "<<max_row;
}