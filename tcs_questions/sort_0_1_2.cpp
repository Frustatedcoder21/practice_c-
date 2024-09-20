
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n]={0};
    int i=0;
    while(i<n){
        int k;
        cin>>k;
        if(k!=0&&k!=1&&k!=2){
            cout<<"invalid input";
        }else{
            arr[i]=k;
            i++;
        }
    }
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]>arr[j]){
                swap(arr[index],arr[j]);
            }
        }
    }
    for(int l=0;l<n;l++){
        cout<<arr[l];
    }
}