#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    for (int i = 0, j=1; i < n; i++, j++)
    {
        if(arr[j] != arr[i]){
            cout << arr[i] << " ";
        }
    }
    
    
    return 0;
}