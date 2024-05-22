#include <iostream>
using namespace std;
bool esPrimo (int num);

int main(){
    int num;
    cout << "Ingrese un numero para verificar si es primo: " << endl;
    cin >> num;

    if (esPrimo(num))
    {
        cout << num << " es primo" << endl;
    }
    else {
        cout << num << " no es primo" << endl;
    }
    return 0;
}

bool esPrimo(int num) {
    // Si el número es menor o igual a 1, no es primo
    if (num <= 1) {
        return false;
    }
    // Iteramos desde 2 hasta la raíz cuadrada del número
    // para verificar si tiene algún divisor que no sea 1 ni él mismo
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            // Si encontramos un divisor, el número no es primo
            return false;
        }
    }
    return true;
}