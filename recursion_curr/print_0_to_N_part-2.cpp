#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    if (n < 1) {
        return;
    }
    print(n - 1);
    cout << n;  // It will print while returning from the recursion stack
}

int main() {
    print(5);
}
