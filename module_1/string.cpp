#include<bits/stdc++.h>

using namespace std;

int main(){

    int x;
    cin >> x;
    cin.ignore();

    char str[101];
    // cin >> str;
    cin.getline(str, 100);
    cout << x << endl << str << endl;
    return 0;
}