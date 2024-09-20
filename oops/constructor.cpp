#include<iostream>
using namespace std;
 class student{
     public:
     string name;
     int age,roll;
     string grade;                                    // this points to the object , its stores object address;
     // here constructor overloading is taking place 
     student(){ // default constructor
     cout<<"Hello Students"<<endl; 
     }
     student(string name,int age,int roll,string grade){ // parameterized constructor
      this->name=name; // here this-> name is objects name and name on right side is the local parameter
      this->age=age;
      this->roll=roll;
      this->grade=grade;
     }  
     student(string name,int age){
     this->name=name;
     this->age=age;
     roll=223;
     grade="C1";
     }
     
     void display(){
         cout<<name<<" "<<roll<<" "<<age<<" "<<grade<<endl;
     }
     
     
     
     
 };
 int main(){
     student s1; // this invokes default constructor
     student s2("Mayank",24,121,"A1");  //s2 & s3 invokes parameterized constructor
     s2.display();
     student s3("Atul",24,221,"B1");
     s3.display();
     student s4("Saket",18);
     s4.display();
    
    
   
 }