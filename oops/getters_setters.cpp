#include<iostream>
using namespace std;
 class student{
     private:
     string name;
     int age,roll;
     string grade;
     public:
     //Setters; It sets value even though the data variables are private;
     void set_name(string s){
         name=s;
     }
     void set_age(int a){
         age=a;
     }
     void set_roll(int r){
         roll=r;
     }
     void set_grade(string g){
         grade=g;
     }
     //Getters; // It gets value even though the data variables are private;
     void get_name(){
         cout<<name<<" ";
     }
     void get_age(){
         cout<<age<<" ";
     }    
    
     void get_roll(){
         cout<<roll<<" ";
     }
    
     void get_grade(){
         cout<<grade<<endl;
     }
 };
 int main(){
     student s1;
     s1.set_name("Mayank");
     s1.set_age(24);
     s1.set_roll(18);
     s1.set_grade("A1");
     s1.get_name();
     s1.get_age();
     s1.get_roll();
     s1.get_grade();
   
 }