#include<iostream>
using namespace std;
 class student{
     public:
     string name;
     int age,roll;
     string grade;
 };
 int main(){
     student s1;
     s1.name="Mayank";
     s1.age=24;
     s1.roll=198;
     s1.grade="A1";
     cout<<s1.name;
 }