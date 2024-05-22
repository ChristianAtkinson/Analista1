#include <iostream>
using namespace std;
double promedio(int nro1, int nro2, int nro3);
int main(){
    int nro1, nro2, nro3;
    //double resultado;
    cout << "Ingresa tres numeros3 enteros para obtener su promedio" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> nro1;
    cout << "Ingrese el segundo numero ";
    cin >> nro2;
    cout << "Ingrese el tercer numero: ";
    cin >> nro3;
    //llamada a la funcion y alamcnamiento del resultado
    double resultado = promedio(nro1, nro2, nro3);
    //imprimir el resultado
    cout << "El promedio de los 3 numeros es: " << resultado << endl;
    return 0;
}
double promedio(int nro1, int nro2, int nro3) {
    double resultado;
    resultado = (nro1 + nro2 + nro3)/3.0;
    return resultado;
    //cout << "El promedio de los 3 numeros es: " << resultado << endl; 
}