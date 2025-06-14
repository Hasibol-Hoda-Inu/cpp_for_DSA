#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool cmp(Student l, Student r)
{

    if (l.total_marks == r.total_marks)
    {
        return l.id < r.id ? true : false;
    }
    else if (l.total_marks > r.total_marks)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].nm >> obj[i].cls >> obj[i].s >> obj[i].id >> obj[i].math_marks >> obj[i].eng_marks;
    }

    for (int i = 0; i < n; i++)
    {
        obj[i].total_marks = obj[i].math_marks + obj[i].eng_marks;
    }

    sort(obj, obj + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].nm << " " << obj[i].cls << " " << obj[i].s << " " << obj[i].id << " " << obj[i].math_marks << " " << obj[i].eng_marks << endl;
    }

    return 0;
}