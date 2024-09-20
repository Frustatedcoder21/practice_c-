// if we return false to sort function it means we have to sort it 
//   if we return true to sort function it means we don't have to sort it 
#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<int,int> a , pair<int,int> b){
    if(a.first!=b.first){
        if(a.first>b.first)
        return false; // it means sorting
        return true;
    }else{
        if(a.second>b.second)
        return true;
        return false;
    }
   
}

int main() {
    vector<pair<int,int>> v(3);
    for(int i=0;i<3;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
     for(int i=0;i<3;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    
}
