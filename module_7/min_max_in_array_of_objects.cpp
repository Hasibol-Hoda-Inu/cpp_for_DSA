#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;

    void func(){
        cout << "Hello ami function bolchi\n";
    }
};

int main(){
    int n;
    cin >> n;

    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, obj[i].name);
        cin >> obj[i].roll >> obj[i].marks;
    }

    // int mn = INT32_MAX;
    // int mx = INT_MIN;

    Student mn, mx;
    mn.marks = INT_MAX;
    mx.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(obj[i].marks < mn.marks){
            mn = obj[i];
        }

        if(obj[i].marks > mx.marks){
            mx = obj[i]; 
        }
    }
    
    cout << "min: " << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << "max: " << mx.name << " " << mx.roll << " " << mx.marks << endl;
    return 0;
}