#include<iostream>
using namespace std;
 class student{
     public:
     string name;
     int age,roll;
     string grade;
     
     
 };
 int main(){
     student s1; // static object allocation
    s1.name="Mayank";
    s1.age=24;
    s1.roll=121;
    s1.grade="A1";
    student *s2= new student; //dynamic object allocation;
    (*s2).name="Atul";
     s2->age=23;
     s2->roll=122;
     s2->grade="B2";
    
   
 }