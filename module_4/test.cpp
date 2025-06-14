#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    getline(cin, name);

    sort(name.begin(), name.end());

    for (int i = 0; i < name.length(); i++)
    {
        if(name[i] != ' '){
            cout << name[i];
        }
    }
    
    
    return 0;
}

