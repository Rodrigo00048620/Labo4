#include <iostream>
using namespace std;
int main(){
    string palabra = "";
    cout << "ingrese una palabra" << endl;
    cin >> palabra;
    if (palabra.length() >= 10){    // utilizo metodo length para saber la cantidad de letras que posee la palabra
        if (palabra.length() % 2 == 0){ 
            cout << "la palabra es par y posee: " << palabra.length() << " letras" << endl;
        }else{
            cout << "la palabra es impar y posee: " << palabra.length() << " letras" << endl;
        }
    }else{
        cout << "La palabra no es mayor de 10 letras, posee: " << palabra.length() << " letras"<< endl;
    }
}