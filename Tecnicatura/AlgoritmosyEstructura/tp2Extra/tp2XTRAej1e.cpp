#include <iostream>
using namespace std;

double funcionLineal(double x) {
    return 2 * x + 1;
}

int main() {
    double x[4];

    cout << "Programa que da 4 valores  a la funcion lineal y= 2.x + 1" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingresa el valor de x[" << i << "] " << endl;

        cin >> x[i];
    }
    cout << "pares ordenados para la funcion lineal y= 2.x + 1:\n" << endl;
    for (int i = 0; i < 4;  i++)
    {
        double y = funcionLineal(x[i]);
        cout << "(" << x[i] << ", " << y << ")\n";
    }

    return 0;
}
    