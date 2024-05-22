#include <iostream>
using namespace std;

float promedio(float a, float b, float c);

int main() {
    float a, b, c;
    cout << "Ingrese tres valores: ";
    cin >> a >> b >> c;
    cout << "El promedio de los valores es: " << promedio(a, b, c) << endl;
    return 0;
}   

float promedio(float a, float b, float c) {
    return (a + b + c) / 3;
}   