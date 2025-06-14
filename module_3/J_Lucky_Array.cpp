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

    sort(arr, arr+n); //ascending order sorting

    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[0] == arr[i]){
            count++;
        }
    }

    if(count%2 != 0){
        cout << "Lucky";
    }else{
        cout << "Unlucky";
    }
    
    return 0;
}