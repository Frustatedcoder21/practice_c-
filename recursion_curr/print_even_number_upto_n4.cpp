#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    if(n<1){
        return;
    }
    print(n-2);
    cout << n<<endl;  // It will print while returning from the recursion stack
}

int main() {
    int n;
    cin>>n; 
    if(n%2==0) //check if the given input is  even or odd
    print(n); 
    else
    print(n-1);
}
