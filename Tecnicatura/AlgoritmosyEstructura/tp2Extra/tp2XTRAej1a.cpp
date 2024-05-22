#include <iostream>

using namespace std;
int main(){
    string nombre;
    char sexo;
    int edad = 0;
    float estatura;
    cout<<"Programa que muestra por pantalla datos solicitados por el usuario"<<endl;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Sexo; F o M: ";
    cin>>sexo;
    if ((sexo != 'F' && sexo != 'f') && (sexo != 'M' && sexo != 'm')){   
        cout<<"Sexo erroneo, se acepta solo F o M"<<endl;
        cout<<"Sexo: ";
        cin>>sexo;     
    } else {
        cout<<"Sexo correcto"<<endl;
    }
    cout<<"Edad: ";
    cin>>edad;
    cout<<"Estatura: ";
    cin>>estatura;
    cout<< nombre << " tiene " << edad << " años y mide " << estatura << " m." << endl;

    return 0;       

}
