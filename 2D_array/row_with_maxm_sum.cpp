//print row with maxm sum
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[4][5] = {{12, 42, 23, 64, 75}, {61, 27, 48, 29, 10}, {23, 12, 45, 57, 45}, {21, 56, 87, 45, 23}};
    int sum = 0;
    int max_sum = INT_MIN;
    int max_sum_row_index = -1; // Initialize with an invalid index

    for(int i = 0; i < 4; i++) {
        sum = 0;
        for(int j = 0; j < 5; j++) {
            sum += arr[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_sum_row_index = i;
        }
    }

    cout << "Row with maximum sum: " << max_sum_row_index << endl;
    cout << "Maximum sum: " << max_sum << endl;
    return 0;
}
