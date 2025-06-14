#include <bits/stdc++.h>
using namespace std;

int* func(){
  int* x = new int[5];
  for(int i; i<5; i++){
    cin >> x[i];  
  }
  
  return x;
}

int main(){
  
  int* x = func();
  
  for(int i; i<5; i++){
    cout << x[i] << " ";  
  }
  
  cout << "AKA Huda";
  
  return 0;
}