#include <iostream>
using namespace std;   

int calcularEdad(int anioActual, int mesActual, int diaActual, int anioNac, int mesNac, int diaNac);

//se solicitan los datos de la fecha de nacimiento
int main() {
    int anioActual, mesActual, diaActual, anioNac, mesNac, diaNac, edad;
    cout << "Calculadora de edad" << endl;
    cout << "Ingrese el año de su nacimiento: ";
    cin >> anioNac;
    cout << "Ingrese el mes de su nacimiento: ";
    cin >> mesNac;
    cout << "Ingrese el día de su nacimiento: ";
    cin >> diaNac;
    cout << "Ingrese el año actual: ";
    cin >> anioActual;
    cout << "Ingrese el mes actual: ";
    cin >> mesActual;
    cout << "Ingrese el día actual: ";
    cin >> diaActual;
    edad = calcularEdad(anioActual, mesActual, diaActual, anioNac, mesNac, diaNac);
    cout << "Tu edad es: " << edad << endl;
    return 0;
}
    int calcularEdad(int anioActual, int mesActual, int diaActual, int anioNac, int mesNac, int diaNac) {

    int edadActual = 0;
    edadActual = anioActual - anioNac;
    if ((mesNac < mesActual) || (mesNac == mesActual && diaNac < diaActual))
        cout << "Tu edad es: " << edadActual << endl;
    
    else {
        edadActual--;
        cout << "Tu edad es: " << edadActual << endl;
    }
    //return edadActual; // Devuelve el valor de edadActual
}