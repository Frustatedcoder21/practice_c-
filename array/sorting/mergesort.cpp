#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int start, int mid, int end) {
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp[index] = arr[left];
            index++;
            left++;
        } else {
            temp[index] = arr[right];
            index++;
            right++;
        }
    }
    while (left <= mid) {
        temp[index] = arr[left];
        index++;
        left++;
    }
    while (right <= end) {
        temp[index] = arr[right];
        index++;
        right++;
    }
    for (int i = 0; i < temp.size(); i++) {
        arr[start + i] = temp[i];
    }
}

void mergesort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = (start + end) / 2; // find the mid
    mergesort(arr, start, mid); //dividing in left side
    mergesort(arr, mid + 1, end); //dividing in right side
    merge(arr, start, mid, end);  //merge
}

int main() {
    int v[5] = {2, 1, 3, 7, 6};

    mergesort(v, 0, 4);
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
