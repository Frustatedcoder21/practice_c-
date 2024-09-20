// eucilidan gcd
#include<bits/stdc++.h>
using namespace std;
int find_gcd(int a, int b){
    if(b==0)
    return a;
    return find_gcd(b,a%b);
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<"G.C.D of "<<a<<", "<<b<<find_gcd(a,b);
}
