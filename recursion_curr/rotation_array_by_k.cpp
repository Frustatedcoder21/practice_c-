#include<iostream>
#include<vector>
using namespace std;

// reverse

void reverse(vector<int>&v,int start,int end){
    if(start>=end){
        return;
    }
    swap(v[start],v[end]);
    reverse(v,start+1,end-1);
}
void rotate(vector<int>&v,int k){
    
    reverse(v,0,v.size()-1); // reverse whole array
    reverse(v,0,k-1);  // reverse till 0 to k-1
    reverse(v,k,v.size()-1); // reverse other half
}
int main(){
    vector<int>v={1,2,3,4,5};
    int k;
    cin>>k;
    rotate(v,k);
    for(int it:v)
    cout<<it;
}