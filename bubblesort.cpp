
#include <iostream>
using namespace std;

int main()
{   int l;
    cout<<"Enter the length :";
    cin>>l;
    int arr[1000]={0};
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    for(int i=l-2;i>0;i--){
        for(int k=0;k<=i;k++){
            if(arr[k]>arr[k+1]){
                swap(arr[k],arr[k+1]);
            }
        }
    }
    for(int i=0;i<l;i++){
        cout<<arr[i];
    }
}