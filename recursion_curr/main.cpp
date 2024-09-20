
#include <iostream>
using namespace std;
void print(string s, int n){
    if(n==0){
        cout<<"Happy Birthday";
        return;
    }
    cout<<s<<n<<endl;
    print(s,n-1);
}
int main()
{   string s="day left";
    int n=5;
    print(s,n);
}