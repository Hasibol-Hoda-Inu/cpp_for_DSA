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
 
        if (n % 2 == 0)
        {
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
 
            int even = 0;
            int odd = 0;
 
            for (int i = 0; i < n; i++)
            {
                arr[i] % 2 == 0 ? even++ : odd++;
            }
 
            if (even == odd)
            {
                cout << "0" << endl;
            }
            else
            {
                int dif = abs(even - odd);
                int ans = dif / 2;
                cout << ans << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
 
    return 0;
}