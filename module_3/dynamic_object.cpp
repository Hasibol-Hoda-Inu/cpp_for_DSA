#include<bits/stdc++.h>
using namespace std;
class Student{
    public: 
    int roll; 
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa){ //constructor
        this->roll = roll; 
        this->cls = cls;
        this->gpa = gpa;
    }

};

Student* func(){
    Student* rahim = new Student(15, 9, 4.75); //dynamic object in a function
    return rahim;
}

int main(){
    Student* obj = func(); //caling the function and holding the returned object
    
    // Student* obj = new Student(15, 9, 4.75); //dynamic array stores data in heap memory
    
    cout << obj->roll << " " << obj->cls << " " << obj->gpa << endl; 
    return 0;
}