#include<bits/stdc++.h>
using namespace std;

int main(){
    string nm;
    getline(cin, nm);

    stringstream ss(nm);

    string w;
    while(ss >> w){
        if(w == "Jessica"){
            cout << "YES";
            return 0;
        }

    }

    cout << "NO";
    return 0;
}