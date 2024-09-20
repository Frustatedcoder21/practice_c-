#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    int left = 0, right = 3, top = 0, bottom = 2;

    while (left <= right && top <= bottom) {
        // Print top row
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Print rightmost column
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Print leftmost column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}
