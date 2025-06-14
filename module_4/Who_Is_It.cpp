#include<bits/stdc++.h>
using namespace std;

class Student{
    public: 
    int id;
    string name;
    char section;
    int tm;
};

int main(){
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student topper;

        for (int i = 1; i <= 3; i++)
    {
        Student temp;

        cin >> temp.id >> temp.name >> temp.section >> temp.tm;

        if (i == 1)
        {
            topper = temp;
        }
        else
        {
            if (temp.tm > topper.tm)
            {
                topper = temp;
            }
            else if (temp.tm == topper.tm)
            {
                if (topper.id > temp.id)
                {
                    topper = temp;
                }else{
                    topper = topper;
                } 
            }
        }
    }
        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.tm << endl;
    }


    

    return 0;
}