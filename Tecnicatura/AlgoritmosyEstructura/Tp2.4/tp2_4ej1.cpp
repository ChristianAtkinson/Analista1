#include <iostream>
using namespace std;

float descuento(int cantProd, int desc, int precio);

int main(){

    int cantProd, desc;
    int precio = 80;
    cout << "Este programa indique el costo de N productos con el dscuento respectivo" << endl; 
    cout<<"Ingrese la cantidad de productos: ";
    cin>>cantProd;
    if ((cantProd > 0) && (cantProd < 10)){
        desc = 0;
}
    else if ((cantProd >= 10) && (cantProd < 20)){
        desc = 12;
}
    else if ((cantProd >= 20) && (cantProd < 30)){
        desc = 25;
}
    else if (cantProd > 30){
        desc = 40;
    }
    cout<<"el valor total de la compra por " <<cantProd<<" es: "<<descuento(cantProd, desc, precio);
    return 0;
}

float descuento(int cantProd, int desc, int precio){
    float descuento;
    int valorTotal = (cantProd * precio);
    descuento = valorTotal - (desc * valorTotal) / 100;
    return descuento;
}