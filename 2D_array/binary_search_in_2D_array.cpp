#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 10, 16},
        {19, 21, 24, 25}
    };
    int key;
    cin >> key;

    for (int i = 0; i < 3; i++) {
        // Check if the key could be in the current row
        if (arr[i][0] <= key && key <= arr[i][3]) {
            int start = 0, end = 3; // Indices for binary search within the row
            while (start <= end) {
                int mid = (start + end) / 2;
                if (arr[i][mid] == key) {
                    cout << "Key is at row " << i << " and at column " << mid << endl;
                    return 0;
                }
                if (key > arr[i][mid]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
    }
    cout << "Key not found" << endl;
    return 0;
}
