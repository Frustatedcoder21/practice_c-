// print_array
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int index){
    if(index==5)
    return ;
    print(arr,index+1);
    cout<<arr[index]<<endl;
    
}

int main() {
    int arr[5]={1,2,3,4,5};
    print(arr,0);
}
