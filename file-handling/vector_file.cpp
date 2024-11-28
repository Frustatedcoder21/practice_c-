#include<iostream>
#include<fstream>
#include<vector>

using namespace std;
int main(){
    vector<int>v(5);
    cout<<"Enter the output";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    ofstream fout;
    fout.open("vector.txt");
    for(int i=0;i<v.size();i++){
        fout<<v[i]<<" ";
    }
    fout.close();
}