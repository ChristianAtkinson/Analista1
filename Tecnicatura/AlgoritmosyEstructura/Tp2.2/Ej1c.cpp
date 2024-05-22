#include <iostream>
using namespace std;
int producto1(int nro1, int nro2);  //Funcion que calcula el producto de dos numeros
int producto2(int nro3, int nro4);  //Funcion que calcula el producto de dos numeros

int main() {
    int nro1, nro2, nro3, nro4;
    int res1, res2;
    cout << "Se le pedira que ingrese 4 numeros: ";
    cout << "Ingrese dos números: ";
    cin >> nro1 >> nro2;  
    cout << "Ingrese dos números: ";
    cin >> nro3 >> nro4;

    res1 = producto1(nro1, nro2);
    res2 = producto2(nro3, nro4);

    cout << "El producto de " << nro1 << " y " << nro2 << " es: " << res1 << endl;
    cout << "El producto de " << nro3 << " y " << nro4 << " es: " << res2;
}
int producto1(int nro1, int nro2) {
    int res1 = nro1 * nro2;
    return res1;
}

int producto2(int nro3, int nro4) {
    int res2 = nro3 * nro4;
    return res2;
}
