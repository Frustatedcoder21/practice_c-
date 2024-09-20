#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>temp){ // function to print subsequence
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" "; 
    }
    cout<<endl;
}
void generate_subsequence(int arr[],int index,int size,vector<int>temp){
    if(index>=size){
        print(temp);// 
        return;
    }
    generate_subsequence(arr,index+1,size,temp); // to not take the element in subsequence
    temp.push_back(arr[index]); // to take the element in subsequence
    generate_subsequence(arr,index+1,size,temp);  
}
int main(){
    int arr[3]={1,2,3};
    vector<int>temp;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    generate_subsequence(arr,0,size,temp);
}