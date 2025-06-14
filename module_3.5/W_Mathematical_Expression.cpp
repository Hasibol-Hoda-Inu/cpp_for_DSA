#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    // cout << a << " " << s << " " << b << " " << q << " " << c;

    if(s == '+'){
        if(a+b == c){
            cout << "Yes";
            return 0;
        }else{
            cout << a+b;
            return 0;
        }
    }else if(s == '-'){
        if(a-b == c){
            cout << "Yes";
            return 0;
        }else{
            cout << a-b;
            return 0;
        }
    }else{
        if(a*b == c){
            cout << "Yes";
            return 0;
        }else{
            cout << a*b;
            return 0;
        }
    }
    return 0;
}