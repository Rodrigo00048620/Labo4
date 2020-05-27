#include <iostream>
using namespace std;
int main(){
    string p = "";
    cout << "ingrese una palabra" << endl;
    cin >> p;
    if(p[0] == p.back()){
        cout << "empieza y termina con la misma letra" << endl;
    }else{
        cout << "La primera y ultima letra no son la misma" << endl;
    }
    
}