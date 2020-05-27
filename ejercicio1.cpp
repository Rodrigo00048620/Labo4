#include <iostream>
using namespace std;
int main(){
    float n1 = 0;
    float n2 = 0;
    cout << "ingrese un numero mayor de 0" << endl;
    cin >> n1;
    if (n1 > 0){
         cout << "ingrese el segundo numero menor de 100" << endl;
            cin >> n2;
            if (n2 <= 100){
                float operacion = n1/n2;
                    if(0 <= operacion <= 100 ){
                     cout << "se puede realizar la division" << endl;
                     }else{
                        cout << "No se puede realizar la operacion" << endl;
                     }

                     }else{
                cout << "no es un digito valido" << endl;
            }
    }else{
        cout << "no es un digito valido" << endl;
    } 
}