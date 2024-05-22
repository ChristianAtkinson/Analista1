#include <iostream>

using namespace std;
int salario(int horas, int montoPorHora);

int main(){
    int horas = 0;
    int montoPorHora;

    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horas;
    if (horas <= 40){
        montoPorHora = 200;
    } else {
        montoPorHora = 250;
    }
    cout << "El monto por hora es: " << montoPorHora << " y el salario a prcibir es: $" << salario(horas, montoPorHora) << endl;    

    return 0;   
}

int salario(int horas, int montoPorHora){
    return horas * montoPorHora;
}