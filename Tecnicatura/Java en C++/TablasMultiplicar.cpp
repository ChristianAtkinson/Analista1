#include <iostream>
using namespace std;
int main()  {
    int tabla ;
    cout << "Introduce la tabla de multiplicar que quieres ver: ";
    cin >> tabla;
    for (int i = 1; i <= 10; i++) {
        cout << tabla << " x " << i << " = " << tabla * i << endl;
    }
    return 0;
}