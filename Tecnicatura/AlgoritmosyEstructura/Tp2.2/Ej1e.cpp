#include <iostream>
using namespace std;
//declaracion de la funcion
float conversorCelsius(float gradosFar);

int main()
{   //declaracion de variables
    float gradosFar, gradosCelsius;
    
    cout << "Conversor de grados Farhenheit a grados Celsius" << endl;
    cout << "Grados Farhenheit: ";
    //asigno valor a la variable
    cin >> gradosFar;
    //llamo a la funcion
    gradosCelsius = conversorCelsius(gradosFar);
    cout << "Grados Celsius: " << gradosCelsius << endl;
    return 0;
}

float conversorCelsius(float gradosFar){
    //conversion
    float gradosCelsius = ((gradosFar - 32.0) * 5.0 / 9.0 );
    //devuelvo el valor
    return gradosCelsius;
}
