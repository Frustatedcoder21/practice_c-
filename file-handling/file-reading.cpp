#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;  // making object of ifstream class
    fin.open("hello.txt"); //opening file
    char c;  //intialize variblae to read
    fin>>c; // read the first element
    while (!fin.eof())  // run till the file is not ending
    {
        cout<<c; // print the element
        fin>>c;  // read next element

    }
    fin.close(); // close the file 
    
}
// in this method spaces and tabs are not read