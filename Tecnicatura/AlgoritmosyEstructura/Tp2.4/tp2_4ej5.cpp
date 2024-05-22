#include <iostream>

using namespace std;

int sumatoria(int n);

int main() {
    int n;
    cout << "Programa qu calcula la suma desde 1 hasta n" << endl;
    cout << "Introduzca el valor de n: ";
    cin >> n;
    cout << "La suma es: " << sumatoria(n) << endl;
    return 0;
}   

int sumatoria(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}
   