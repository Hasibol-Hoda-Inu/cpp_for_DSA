#include <iostream>
using namespace std;

int main(){
    int day;
    cin >> day;

    int x;
    cin >> x;

    switch(x%2){
        case 0 :
            cout << "Even\n";
            break;
        case 1 : 
            cout << "Odd\n";
            break;
    }

    switch(day){
        case 1:
            cout << "sun";
            break;
        case 2:
            cout << "Mon";
            break;
        case 3: 
            cout << "Tue";
            break;
        case 4: 
            cout << "Wed";
            break;
        case 5:
            cout << "Thu";
            break;
        case 6: 
            cout << "Fri";
            break;
        case 7:
            cout << "Sat";
            break;
        default: 
            cout << "Over a week";
            break;
    }
    return 0;
}