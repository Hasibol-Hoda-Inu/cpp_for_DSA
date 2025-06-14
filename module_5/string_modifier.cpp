#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello Earth";
    string str = " Hola";
    // s+=str;
    // str.push_back('z');
    s.replace(6, 0, "Bangladesh ");
    cout << s << endl;
    return 0;
}