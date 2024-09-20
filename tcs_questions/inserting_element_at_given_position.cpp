#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>

using namespace std;

int main() {
    vector<int> v;
    int size;
    cout<<"enter the size";
    cin >> size;
    cout<<"Enter the elements";
    for (int i = 0; i < size; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    int pos;
    cout<<"Enter the posi";
    cin>>pos;
    int val;
    cout<<"Enter the value to be pushed";
    cin>>val;
    
    if(pos==size){
            v.push_back(val);
        }else{
            v.resize(size+1);
    for(int i=size;i>=pos;i--){
              
            v[i+1]=v[i];
        
    }
            
            v[pos]=val;
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
    }

   

