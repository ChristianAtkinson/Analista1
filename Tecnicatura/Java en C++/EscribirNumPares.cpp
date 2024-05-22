#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 0;
    int i = 0;
    cout << "Introduce un numero: ";
    cin >> num;
    while (i <= num)
    {
        cout << i << endl;
        i = i + 2;
    }
    return 0;
}
