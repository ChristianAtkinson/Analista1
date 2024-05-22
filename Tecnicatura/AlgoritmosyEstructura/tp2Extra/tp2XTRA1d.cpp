#include <iostream>
using namespace std;
double formulaPuntopendiente(double x_1, double y_1, double m);
double funcionLineal(double x_1, double m, double b);
double formulaConDosPuntos(double x_1, double x_2, double m_1, double m_2);

int main()
{
    int op = 0;
    double y = 0;
    
   while (op != 1 && op != 2 && op != 3)
   {
    cout << "este programa resuelve ecuaciones relacionadas a la funcion lineal" << endl;
    cout << "ingrese 1 para la resolver la formula de punto pendiente" << endl;
    cout << "ingrese 2 para la resolver la ecuacion de la recta" << endl;
    cout << "ingrese 3 para la resolver la formula de dos puntos" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
    if (op == 1) {
        double x_1, y_1, m;
        cout << "ingrese el valor de x_1" << endl;
        cin >> x_1;
        cout << "ingrese el valor de y_1" << endl;
        cin >> y_1;
        cout << "ingrese el valor de m" << endl;
        cin >> m;
        formulaPuntopendiente(x_1, y_1, m);
        cout << "el valor de Y es: " << y << endl;
    }
    break;
    case 2:
    if (op == 2) {
        double x_1, y_1, b;
        cout << "ingrese el valor de x_1" << endl;
        cin >> x_1;
        cout << "ingrese el valor de y_1" << endl;
        cin >> y_1;
        cout << "ingrese el valor de b" << endl;
        cin >> b;
        double y = funcionLineal(x_1, y_1, b);
        cout << "el valor de Y es: " << y << endl;
    }
    break;
    case 3:
    if (op == 3) {
        double x_1, x_2, m_1, m_2;
        cout << "ingrese el valor de x_1" << endl;
        cin >> x_1;
        cout << "ingrese el valor de x_2" << endl;
        cin >> x_2;
        cout << "ingrese el valor de m_1" << endl;
        cin >> m_1;
        cout << "ingrese el valor de m_2" << endl;
        cin >> m_2;
        formulaConDosPuntos(x_1, x_2, m_1, m_2);
        cout << "el valor de Y es: " << y << endl;

    }
    break;
    default:
        cout << "la opcion no es valida" << endl;
        break;
    }   
}
    return 0;
}

double formulaPuntopendiente(double x_1, double y_1, double m) {
    double y = (m * x_1) + y_1;
    return y;       
    
}

double funcionLineal(double x_1, double m, double b) {
    double y = (m * x_1) + b;
    return y;
}

double formulaConDosPuntos(double x_1, double x_2, double m_1, double m_2) {
    double y = (m_1 * x_1) / (m_2 * x_2);
    return y;
}
