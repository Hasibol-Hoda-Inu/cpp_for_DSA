#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int cls;
    int english;
    int math;

    student(string name, int roll, int cls, int english, int math)
    {
        this->name = name;
        this->roll = roll;
        this->cls = cls;
        this->english = english;
        this->math = math;
    }

    void func()
    {
        cout << "Total marks of " << name << " " << '=' << " " << english + math << endl;
    }
};

int main()
{
    student rakib("Rakib", 23, 9, 80, 90);
    rakib.func();

    student sakib("Sakib", 21, 10, 70, 80);
    sakib.func();

    return 0;
}