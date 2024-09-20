#include <unordered_map>
#include <iostream>
using namespace std;

int main() {
    unordered_map<char, int> roman_value;
    roman_value['I'] = 1;
    roman_value['V'] = 5;
    roman_value['X'] = 10;
    roman_value['L'] = 50;
    roman_value['C'] = 100;
    roman_value['D'] = 500;
    roman_value['M'] = 1000;

    string s;
    int val = 0;

    cout << "Enter the roman numeral: ";
    getline(cin, s);

    for (int i = 0; i < s.size() - 1; i++) {
        if (roman_value[s[i]] >= roman_value[s[i + 1]]) {
            val += roman_value[s[i]];
        } else {
            val -= roman_value[s[i]];
        }
    }
    
    val += roman_value[s[s.size() - 1]]; // Add the value of the last character
    cout << "The decimal value is: " << val << endl;

    return 0;
}
