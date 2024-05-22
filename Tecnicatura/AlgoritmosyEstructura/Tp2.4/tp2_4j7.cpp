#include <iostream>

using namespace std;

int sumarNumeros(int nro1, int nro2);
    
int main() {
    int nro1 = 0;
    int nro2 = 0;
    cout << "ingrese un numero" << endl;
    cin >> nro1;
    cout << "ingrese otro numero: " << endl;
    cin >> nro2;
    while (nro2 < nro1) {
        cout << "elige un numero mayor que el primero: " << endl;
        cin >> nro2;
    }
    cout << "la suma es: " << sumarNumeros(nro1, nro2) << endl;
    return 0;
}

int sumarNumeros(int nro1, int nro2) {
    int suma = 0;
    suma = nro1 + nro2;
    return suma;    
    }

  
    
