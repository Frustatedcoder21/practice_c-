
#include <iostream>
using namespace std;

int main() {
    int arr1[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}};
    int arr2[4][3] = {{1, 2, 3}, {5, 6, 7}, {9, 1, 2}, {8, 6, 3}};
    int arr3[3][3] = {0}; // Initialize arr3 with zeros

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Output arr3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

    