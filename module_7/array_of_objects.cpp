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

    Student obj_arr[n]; //array of object
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, obj_arr[i].name);
        cin >> obj_arr[i].roll >> obj_arr[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << obj_arr[i].name << " " << obj_arr[i].roll << " " << obj_arr[i].marks << endl;
        
        obj_arr[i].func();
    }
    
    
    return 0;
}