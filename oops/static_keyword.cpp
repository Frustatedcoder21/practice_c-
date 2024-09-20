#include <iostream>
using namespace std;

class student {
    string name;
    int age;
    int marks;

public:
    // static data members
    static int total_marks;
    static int total_age;
    static int count;
   
    student(string name, int age, int marks) {
        this->name = name;
        this->age = age;
        this->marks = marks;
        total_marks += marks;
        total_age += age;
        count++;
    }
  // static members function
    static double average_marks() {
        return (double) total_marks / count;
    }

    static double average_age() {
        return (double) total_age / count;
    }
};

int student::total_marks = 0;
int student::total_age = 0;
int student::count = 0;

int main() {
    student s1("Mayank", 24, 55);
    student s2("Atul", 23, 78);
    student s3("Saket", 24, 99);
    student s4("Ritik", 24, 45);

    cout << "Total Marks: " << student::total_marks << endl;
    cout << "Total Age: " << student::total_age << endl;
    cout << "Average Marks: " << student::average_marks() << endl;
    cout << "Average Age: " << student::average_age() << endl;

    return 0;
}
