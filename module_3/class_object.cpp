#include<bits/stdc++.h>
using namespace std;

class Student{
    public: 
        char name[101];
        int roll;
        double gpa;
};

int main(){
    Student a, b;
    // a.roll = 10;
    // a.gpa = 4.5;
    
    // char temp[101] = "Huda";
    // strcpy(a.name, temp);
    cin.getline(a.name, 101);
    cin >> a.roll >> a.gpa;

    cin.ignore();
    cin.getline(b.name, 101);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}