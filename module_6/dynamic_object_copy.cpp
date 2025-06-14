#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string name;
    int jursey;

    Cricketer(string name, int jursey){
        this->name = name;
        this->jursey = jursey;
    }
};
int main(){
    Cricketer* dhoni = new Cricketer("Dhoni", 19);
    Cricketer* kohli = new Cricketer("Kohli", 18);

    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->name << " " << kohli->jursey << endl;

    return 0;
}