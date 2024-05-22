#include <iostream>
using namespace std;    
//programa que verifica si un numero esta dentro de un rango de numeros
//declaracion de funciones
bool analisisRango(int num, int num2, int num3);

int main()
{
    //declaracion de variables
    int num = 0;
    int num2 = 0;
    int num3 = 0;
    //solicitud de datos
    cout << "Ingresa un numero" << endl;
    cin >> num;
    cout << "Ingresa el primer numero del rango: " << endl;
    cin >> num2;
    cout << "Ingresa el segundo numero del rango: " << endl;
    cin >> num3;
    //llamado de la funcion
    bool rango = analisisRango(num, num2, num3); 
    //salida de datos
    if(rango == true){
        cout << "El numero esta dentro del rango" << endl;
    }
    else{
        cout << "El numero no esta dentro del rango" << endl;
    }
        
    return 0;
}
 //funcion
bool analisisRango(int num, int num2, int num3) {
    return (num >= num2 && num <= num3);
}
