#include <iostream>
#include <algorithm> // for std::max
using namespace std;

int largest_element(int arr[], int index, int size) {
    if (index == size) {
        return arr[0]; // If it's the first call, return the first element as the max
    }
    // Recursively find the largest element
    return max(arr[index], largest_element(arr, index + 1, size));
}

int main() {
    int arr[5] = {2, 1, 3, 4, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << largest_element(arr, 0, size); // Start recursion from index 0
}
