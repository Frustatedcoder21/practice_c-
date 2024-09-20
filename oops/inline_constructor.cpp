#include<iostream>
using namespace std;
 class student{
     public:
     string name;
     int age,roll;
     string grade;                                    
     inline student(string s,int a, int r,string g ): name(s),age(a),roll(r),grade(g){} //inline constructor
     void display(){
         cout<<name<<" "<<roll<<" "<<age<<" "<<grade<<endl;
     }
     
 };
 int main(){
    
     student s2("Mayank",24,121,"A1");  //s2 & s3 invokes parameterized constructor
     s2.display();
     student s3("Atul",24,221,"B1");
     s3.display();
     
    
    
   
 }