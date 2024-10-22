#include<iostream>
#include<vector>
using namespace std;

void subsequences(string s, int index, string current, vector<string>& ans) {
    if (index == s.size()) {
        ans.push_back(current); // Add the current subsequence to the result
        return;
    }
    
    // Include the current character
    subsequences(s, index + 1, current + s[index], ans);
    
    // Exclude the current character
    subsequences(s, index + 1, current, ans);
}

int main() {
    string s = "hello";
    vector<string> v;
    subsequences(s, 0, "", v); // Initial call with an empty subsequence
    
    // Print the subsequences
    for (string it : v) {
        cout << "\"" << it << "\" ";
    }
    cout << endl;

    return 0;
}
