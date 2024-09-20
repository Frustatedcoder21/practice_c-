#include<iostream>
#include<vector>
using namespace std;
void generate_permut(vector<int>&v,vector<int>&permut,vector<vector<int>>&result,vector<bool>&avail)
{
     if(v.size()==permut.size()){ // if the size of the given vector and permutation generated is equal push it
         result.push_back(permut);
         return;
     }
    for(int i=0;i<v.size();i++){    // traverse to each element
        
        if(!avail[i]){ // if not visited
            avail[i]=true;  // mark it true
            permut.push_back(v[i]); // push the unvisited element
            generate_permut(v,permut,result,avail); 
            permut.pop_back(); //while backtracking return to normal state
            avail[i]=false;
        }
    }
    
}

int main(){
    vector<int>v={1,2,3}; // original array
    vector<int>permut; // vector to generate permutation
    vector<vector<int>>result; // 2D vector to store all permutation
    vector<bool>avail(v.size(),false); // vector with default value marked false 
    generate_permut(v,permut,result,avail);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}