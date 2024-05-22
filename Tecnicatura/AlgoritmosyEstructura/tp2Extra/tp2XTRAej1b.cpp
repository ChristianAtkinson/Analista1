#include  <iostream>
using namespace std;
float promedio(float nota1, float nota2, float nota3);

int main(){
    float nota1, nota2, nota3;
    float promFinal = 0;
    cout << "Pragrama que realiza el promedio de 3 notas, teniendo en cuenta la siguiente condicion: \n";
    cout << "la nota de laboratorio que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de Práctica que cuenta el 10% restante." << endl;
    cout << "Ingrese la primera nota: "; 
    cin >> nota1; 
    cout << "Ingrese la segunda nota: "; 
    cin >> nota2; 
    cout << "Ingrese la tercera nota: "; 
    cin >> nota3;
    promFinal = promedio(nota1,nota2,nota3);
    cout << "El promedio final es: " << promFinal << endl;
    return 0;
}
float promedio(float nota1, float nota2, float nota3){
    return ((nota1*0.3 + nota2*0.6 + nota3*0.1));
}