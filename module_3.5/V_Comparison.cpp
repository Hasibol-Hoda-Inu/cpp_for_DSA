#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    char s;
    cin >> a >> s >> b;

    // cout << a << " " << s << " " << b;

    if(s == '>'){
        if(a > b){
            cout << "Right";
            return 0;
        }else{
            cout << "Wrong";
            return 0;
        }
    }else if(s == '<'){
        if(a < b){
            cout << "Right";
            return 0;
        }else{
            cout << "Wrong";
            return 0;
        }
    }else{
        if(a == b){
            cout << "Right";
            return 0;
        }else{
            cout << "Wrong";
            return 0;
        }
    }
    return 0;
}