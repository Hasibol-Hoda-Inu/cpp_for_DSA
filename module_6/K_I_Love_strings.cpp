#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int k = t-1;
    for (int i = 0; i < t; i++)
    {
        string s, t;
        cin >> s >> t;

        if (s.length() < t.length())
        {
            for (int i = 0; i < s.length(); i++)
            {
                cout << s[i] << t[i];
            }
            for (int i = s.length(); i < t.length(); i++)
            {
                cout << t[i];
            }
        }
        else if (t.length() < s.length())
        {
            for (int i = 0; i < t.length(); i++)
            {
                cout << s[i] << t[i];
            }
            for (int i = t.length(); i < s.length(); i++)
            {
                cout << s[i];
            }
        }else{
            for (int i = 0; i < s.length(); i++)
            {
                cout << s[i] << t[i];
            }
            
        }
        
        if(i < k){
            cout << endl;
        }
        
    }

    return 0;
}