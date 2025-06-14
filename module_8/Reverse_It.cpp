#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;


};

int main(){
    int n;
    cin >> n;

    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].nm >> obj[i].cls >> obj[i].s >> obj[i].id;
    }

    int i = 0;
    int j = n-1;
    while (i<j)
    {
        char temp = obj[i].s;
        obj[i].s = obj[j].s;
        obj[j].s = temp;

        i++;
        j--;
    }
    
    

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].nm << " " << obj[i].cls << " " << obj[i].s << " " << obj[i].id << endl;
    }
    
    
    return 0;
}