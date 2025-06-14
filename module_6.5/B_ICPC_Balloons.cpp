#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int f[26] = {0};
        for (int i = 0; i < n; i++)
        {
            f[s[i] - 'A']++;
        }

        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            if (f[i] != 0)
            {
                sum += f[i] + 1;
            }
        }

        cout << sum << endl;
    }

    return 0;
}