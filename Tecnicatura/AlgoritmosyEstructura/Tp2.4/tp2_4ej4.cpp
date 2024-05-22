#include <iostream>

using namespace std;

int main() {
    cout << "Este programa solicita numeros enteros positivos y hasta ingresar 99 y calcula el promedio de los anteriores" << endl;

    int num = 0;
    int suma = 0;
    int prom = 0;
    int cont = 0;
    while (num != 99) {
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num != 99) {
            suma = suma + num;
            cont = cont + 1;
        }
    }
    prom = suma / cont;
    cout << "El promedio es: " << prom << endl;
    return 0;
}