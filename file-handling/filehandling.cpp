#include<iostream>
#include<fstream>

using namespace std;
//ifstream :- read files
//ofstream:- write files
int main(){

ofstream fout; // making object of ofstream class
fout.open("hello.txt");  // opening the file , if not exists it will create it

fout<<"Hello World !!";  // writting the data

fout.close(); // closing the file
}