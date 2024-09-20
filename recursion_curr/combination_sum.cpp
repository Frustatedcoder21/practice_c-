#include <iostream>
#include <vector>
using namespace std;

void combination(vector<int>& v, int index, int target, vector<int>& temp, vector<vector<int>>& comb) {
    if (index == v.size()) {
        if (target == 0) {
            comb.push_back(temp);
        }
        return;
    }
    if (v[index] <= target) {
        temp.push_back(v[index]);
        combination(v, index, target - v[index], temp, comb);
        temp.pop_back();
    }
    combination(v, index + 1, target, temp, comb); // Move to next index
}

int main() {
    vector<int> v = {1, 4, 3, 5, 2};
    vector<int> temp;
    vector<vector<int>> comb;
    combination(v, 0, 5, temp, comb);

    // Print combinations
    for (int i = 0; i < comb.size(); i++) {
        for (int j = 0; j < comb[i].size(); j++) {
            cout << comb[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
