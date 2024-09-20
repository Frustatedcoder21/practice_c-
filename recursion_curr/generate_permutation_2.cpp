
#include <iostream>
#include <vector>
using namespace std;
void generate_permut(int index,vector<int>&v,vector<vector<int>>&permut){
    if(index==v.size()){
        permut.push_back(v);
    }
    for(int i=index;i<v.size();i++){
        
        swap(v[index],v[i]);
        generate_permut(index+1,v,permut);
        swap(v[index],v[i]);
    }
}
int main()
{
    vector<int>v={1,2,3};
    vector<vector<int>>permut;
    generate_permut(0,v,permut);
    for(int i=0;i<permut.size();i++){
        for(int j=0;j<permut[0].size();j++){
            cout<<permut[i][j]<<" ";
        } cout<<"\n";
    }
}