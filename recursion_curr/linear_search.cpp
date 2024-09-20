#include<bits/stdc++.h>
using namespace std;

int find_key(int arr[], int index, int key) {
    if (index == -1) {
        return -1;  // Key not found
    }
    if (arr[index] == key) {
        return index;  // Key found
    }
    return find_key(arr, index - 1, key);  // Recursive call with decremented index
}

int main() {
    int arr[5] = {5, 8, 6, 1, 7};
    int key;
    cin >> key;
    int index = find_key(arr, 4, key);
    if (index != -1) {
        cout << key << " is found at index " << index << endl;
    } else {
        cout << key << " not found" << endl;
    }
    return 0;
}
