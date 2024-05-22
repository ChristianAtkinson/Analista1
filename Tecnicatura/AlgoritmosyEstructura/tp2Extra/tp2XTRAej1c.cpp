#include <iostream>
using namespace std;
float perimetroCuadrado(float lado);
float perimetroTriangulo(float lado);
float perimetroRectangulo(float base, float altura);

int main(){
    float lado, base, altura;
    int opcion;
    cout<<"ingrese la opcion deseada para calcular el primetro del (1)cuadrado, (2)triangulo o (3)rectangulo: ";
    cin >> opcion;
    if (opcion == 1)    
    {
        cout<<"ingrese el lado del cuadrado: ";
        cin>>lado;
        cout<<"el perimetro del cuadrado es: "<<perimetroCuadrado(lado)<<endl;
    }
    
    else if (opcion == 2)
    {
        cout<<"ingrese el valor del lado del triangulo: ";
        cin>>lado;
        cout<<"el perimetro del triangulo es: "<<perimetroTriangulo(lado)<<endl;
    }
    
    else if (opcion == 3)
    {
        cout<<"ingrese la base del rectangulo: ";
        cin>>base;
        cout<<"ingrese la altura del rectangulo: ";
        cin>>altura;
        cout<<"el perimetro del rectangulo es: "<<perimetroRectangulo(base, altura)<<endl;
    }

    else
    {
        cout<<"la opcion no es valida"<<endl;
    }
    return 0;

}

float perimetroCuadrado(float lado){
    return lado*4;
}

float perimetroTriangulo(float lado){
    return lado*3;
}

float perimetroRectangulo(float base, float altura){
    return (base*2)+(altura*2);
}