#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    double pi = 3.14;
    double radio = 14.5/2;
    double altura  =26.79;
    double resultado =  (pi * pow(radio, 2) * altura)/3;
    cout << "El volumen de un cono de base 14.5 y altura 26.79 es: " << resultado << endl;
    return 0;
}
