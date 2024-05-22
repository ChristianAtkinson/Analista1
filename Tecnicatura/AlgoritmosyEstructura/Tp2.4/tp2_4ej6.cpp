#include <iostream>

using namespace std;

int sumatoria(int n);

int main() {
    int n;
    cout << "este programa suma los numeros desde 1 hasta n" << endl;
    cout << "ingrese el valor de n: ";
    cin >> n;
    cout << "la suma desde 1 hasta " << n << " es: " << sumatoria(n) << endl;
    return 0;
}

int sumatoria(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumatoria(n - 1);
    }
}