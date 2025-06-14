#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello earth";
    // s.clear();
    cout << s.size() << endl;
    s.resize(8);
    cout << s.size() << endl;
    cout << s;
    // cout << s.max_size() << endl;
    // cout << s.capacity() << endl;
    return 0;
}