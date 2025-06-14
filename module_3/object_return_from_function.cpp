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

Student func(){
    Student rahim(15, 9, 4.75); //object in a function
    return rahim;
}

int main(){
    Student obj = func(); //caling the function and holding the returned object
    
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl; 
    return 0;
}