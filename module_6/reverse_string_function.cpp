#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    for(char a : s){
        cout << a << " ";
    }
    
    return 0;
}

// streamstring ss(s);
// string word;

// while(ss >> word){
//     reverse(word.begin(), word.end());
//     if(word.end()){
//         cout << word;
//     }else{
//         cout << word << " ";
//     }
    
// }