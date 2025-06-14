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

        char c;
        cin >> c;

        for (int i = 1; i <= n; i++)
        {
            i == n ? cout << c : cout << c << " ";
        }
        if (i != t - 1)
        {
            cout << endl;
        }
    }

    return 0;
}