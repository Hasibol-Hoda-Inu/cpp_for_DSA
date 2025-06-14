#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    string word;
   
    while (ss >> word) // (EOF) End Of File system
    {
        cout << word << " ";
    }
    

    return 0;
}