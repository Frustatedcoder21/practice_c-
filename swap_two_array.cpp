#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,1};
    cout<<"arr1 ka value"<<endl;
    for(int j=0;j<5;j++){
        cout<<arr1[j]<<" ";
    }
     cout<<"\n";
    cout<<"arr2 ka value"<<endl;
    for(int j=0;j<5;j++){
        cout<<arr2[j]<<" ";
    }
    cout<<"\n";
    int i=0;
    while(i<5){
        int temp=0;
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
        i++;
    }
    cout<<"arr1 ka value"<<endl;
    for(int j=0;j<5;j++){
        cout<<arr1[j]<<" ";
    }
     cout<<"\n";
    cout<<"arr2 ka value"<<endl;
    for(int j=0;j<5;j++){
        cout<<arr2[j]<<" ";
    }
}