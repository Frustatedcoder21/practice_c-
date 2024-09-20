// longest prefix suffix ;
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcdeabcd";
    vector<string> prefix;
    vector<string> suffix;
    string pre = "";
    string suf = "";
    int max_size = -1;
    
    // Build the prefix vector
    for (int i = 0; i < s.size() - 1; i++) {
        pre = pre + s[i];
        prefix.push_back(pre);
    }
    
    // Build the suffix vector
    for (int j = s.size() - 1; j > 0; j--) {
        suf = s[j] + suf;
        suffix.push_back(suf);
    }
    
    // Find the maximum size of the common prefix and suffix
    for (int i = 0; i < prefix.size(); i++) {
        for (int j = 0; j < suffix.size(); j++) {
            if (prefix[i] == suffix[j]) {
                max_size = max(max_size, (int)prefix[i].size());
            }
        }
    }
    
    cout << max_size;
    return 0;
}
