#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while (s.find("EGYPT") != -1)
    {
        int idx = s.find("EGYPT");
        s.replace(idx, 5, " ");
    }

    cout << s;

    return 0;
}