#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
    int n;
    cin >> n;

    long long int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }


    long long int sum = INT32_MAX;

    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            long long int temp = arr[i]+arr[j]+j-i;
            sum = min(temp, sum); 
        }
        
    }
    cout << sum << endl;
    }
    
    
    return 0;
}