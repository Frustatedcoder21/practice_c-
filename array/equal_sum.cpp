 //divide array into subarrays with both side equal sum
#include <iostream>
using namespace std;
int main()
{
    int arr[8]={3,4,-2,5,8,20,-10,8},total_sum=0;
    for(int i=0;i<8;i++){
        total_sum+=arr[i]; //total sum krdiye
    }
    int prefix_sum=0,ans;
    for(int i=0;i<8;i++){
        prefix_sum+=arr[i]; // ek ek element of sum krte jaa rhe
        ans=total_sum-prefix_sum;  //usko phir subtract krte jaa rhe baki ke sub array ka ans de rha
        if(ans==prefix_sum){ //agar koi point pe equal aya to return kr denge
            cout<<i;
            break;
        }
    }
}