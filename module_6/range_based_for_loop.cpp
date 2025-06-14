#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // index based for loop
    // for (int i = 0; i < s.length(); i++)
    // {
    //     cout << s[i] << " ";
    // }

    // range based for loop
    for(char c : s){
        cout << c << " ";
    }
    return 0;
}