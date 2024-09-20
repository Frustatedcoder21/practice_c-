#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Array Length" << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Input array elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int key;
    cin >> key;

    int start = 0, end = n - 1, mid, first = -1, last = -1;

    // Finding the first occurrence of the key
    while (start <= end) {
        mid = (start + end) / 2;
        if (v[mid] == key) {
            first = mid;
            end = mid - 1;  // Continue searching in the left half
        } else if (v[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "First occurrence of target = " << first << endl;

    // Reset start and end for finding the last occurrence
    start = 0;
    end = n - 1;

    // Finding the last occurrence of the key
    while (start <= end) {
        mid = (start + end) / 2;
        if (v[mid] == key) {
            last = mid;
            start = mid + 1;  // Continue searching in the right half
        } else if (v[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "Last occurrence of target = " << last << endl;

    return 0;
}
