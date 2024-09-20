
#include <iostream>
using namespace std;

int main()
{
    int v,w;
    cin>>v;
    cin>>w;
    if(v>=w){
        cout<<"invalid input";
    }else{
     int fw=(w-2*v)/2;
     int tw=v-fw;
     cout<<"Number of two wheeler:"<<tw<<endl;
     cout<<"Number of four wheeler:"<<fw;
    }
     
    
}