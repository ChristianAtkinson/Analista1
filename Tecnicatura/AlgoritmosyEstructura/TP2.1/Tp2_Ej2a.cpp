#include <iostream>
using namespace std;
int main() {
    int largo = 5;
    int ancho = 4;
    float alto = 2.5;
    float volumen = largo * ancho * alto;
    cout << "El volumen de una habitacion que mide " << largo << " metros de largo, " << ancho << " metros de ancho y " << alto << " metros de altura es " << volumen << " metros cubicos." << endl;
    return 0;
}
