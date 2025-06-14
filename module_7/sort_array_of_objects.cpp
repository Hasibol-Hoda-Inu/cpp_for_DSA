#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int roll;
    int marks;

    void func()
    {
        cout << "Hello ami function bolchi\n";
    }
};

bool cmp(Student l, Student r){
    if(l.marks > r.marks){
        return true;
    }else{
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
        cin.ignore();
        getline(cin, obj[i].name);
        cin >> obj[i].roll >> obj[i].marks;
    }

    sort(obj, obj+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].roll << " " << obj[i].marks << " " << endl;
    }

    return 0;
}