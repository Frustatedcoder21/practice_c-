#include<iostream>
using namespace std;
 class student{
     public:
     string name;
     int age,roll;
     string grade;                                   
     student(string name,int age,int roll,string grade){ 
      this->name=name;
      this->age=age;
      this->roll=roll;
      this->grade=grade;
     }  
     //copy constructor
     student(student &s){ // s object is referencing to the  s2 as s2 is passed as parameter to the copy constructor
         name=s.name;
         age=s.age;
         roll=s.roll;
         grade=s.grade;
     }
     
     void display(){
         cout<<name<<" "<<roll<<" "<<age<<" "<<grade<<endl;
     }
     
     
     
     
 };
 int main(){
     
     student s2("Mayank",24,121,"A1");  //s2 & s3 invokes parameterized constructor
     s2.display();
     student s3(s2);
     s3.display();
     
    
    
   
 }