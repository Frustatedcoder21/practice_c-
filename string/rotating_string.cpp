#include <iostream>
using namespace std;

void rotateClockwise(string &s) {
    char end = s[s.size() - 1];  //storing the last element
    int index =s.size() - 2 ;
    while (index>=0) {
        
        s[index+1] = s[index]; //shifting element 
       
        index--;
    }
    s[0] = end; // pushing back the stored element
}
void rotateAntiClockwise(string &s){
    char start=s[0];  //storing the first element
    int index=1;
    while(index<s.size()){
        s[index-1]=s[index]; //shifting element
        index++;
    }
    s[s.size()-1]=start; // pushing back the stored element
}

int main() {
    string s = "Hello";
  rotateClockwise(s);
  rotateAntiClockwise(s);
    cout << s;
    return 0;
}
