#include<bits/stdc++.h>
using namespace std;

// Recursive function to find the maximum element in an array
void maxim(int arr[], int index, int maxm, int size) {
    // Base case: if the end of the array is reached, print the maximum element
    if (index == size) {
        cout << maxm;
        return;
    }
    
    // Recursive case: update the maximum and move to the next index
    maxim(arr, index + 1, max(maxm, arr[index]), size);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Initial call to the recursive function
    maxim(arr, 0, arr[0], size);
    
    return 0;
}
