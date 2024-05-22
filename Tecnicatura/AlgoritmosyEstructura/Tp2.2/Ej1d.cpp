#include  <iostream>
#include <cmath>
using namespace std;

double volumenCono(double radio, double altura);

//double volumen = volumenCono(14.5, 26.79);

int main(){
    //double volumen = 0;
    double radio = 14.5;
    double altura = 26.79;
    double volumen = volumenCono(radio, altura);
    
    cout<<"Volumen de un cono de radio 14,5 y altura 26.79 es: "<< volumen <<endl;

    return 0;
}

double volumenCono(double radio, double altura)
{
    //double volumen = 0;
    double pi = M_PI; //constante de pi
    double volumen = (pi*pow(29,2)*26.79)/3;
    

}
