#include <iostream>
using namespace std;

int main() {
    int nro = 0;
    int suma = 0;
    cout << "Ingrese un numero: ";
    cin >> nro;
    while (nro >= 0)
    {
        suma += nro;
        cout << "Ingrese un numero: ";
        cin >> nro;
    }
    if (nro < 0) {
        cout << "La suma es: " << suma;
    }

    return 0;
}
    
