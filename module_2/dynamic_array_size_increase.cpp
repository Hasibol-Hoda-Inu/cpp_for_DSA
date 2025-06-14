#include <bits/stdc++.h>
using namespace std;

int main(){
    int* arr = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    int* a = new int[5];
    for (int i = 0; i < 3; i++)
    {
        a[i] = arr[i];
    }

    a[3] = 40;
    a[4] = 50;

    delete[] arr; // deleting the 1st array

    for (int i = 0; i < 5; i++)
    {
        
        cout << a[i] << " ";
    }
    
    
    
    return 0;
}