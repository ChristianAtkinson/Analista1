#include <iostream>
using namespace std;
float conversorCelsius(float gradosFah, float gradosCelsius);
float conversorFahrenheit(float gradosFah, float gradosCelsius);
int main() {
cout << "Conversor de grados" << endl;
float gradosFah, gradosCelsius;
char opcion;
cout << "Ingresa F para convertir a Celsius o C para convertir a Fahrenheit: ";
cin >>  opcion;
if (opcion == 'F' || opcion == 'c') {
    cout << "Ingresa los grados Fahrenheit: ";
    cin >> gradosFah;
    gradosCelsius = conversorCelsius(gradosFah, gradosCelsius);
    cout << "Los grados Celsius son: " << gradosCelsius << endl;
} else if (opcion == 'C' || opcion=='c') { 
    cout << "Ingresa los grados Celsius: ";
    cin >> gradosCelsius;
    gradosFah = conversorFahrenheit(gradosFah, gradosCelsius);
    cout << "Los grados Fahrenheit son: " << gradosFah << endl;
} else {
    cout << "Opcion invalida" << endl;
    return 0;
}

 
}

float conversorCelsius(float gradosFah, float gradosCelsius) {
    gradosCelsius = (gradosFah - 32) * 5 / 9;
    return gradosCelsius;
}
float conversorFahrenheit(float gradosFah, float gradosCelsius) {
    gradosFah = (gradosCelsius * 9 / 5) + 32;
    return gradosFah;
}

