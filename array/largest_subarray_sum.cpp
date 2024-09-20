#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {25, 24, -32, 44, -84};
    int n = 5;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j]; // Updated line to use arr[j]
            max_sum = max(sum, max_sum);
        }
    }
    cout << max_sum;

    return 0;
}
