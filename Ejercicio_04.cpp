#include <iostream>
using namespace std;

int main() 
{
    int b, x, r = 1;
    cout << "ingrese la base: ";
    cin >> b;
    cout << "ingrese el exponente: ";
    cin >> x;
    for (int i = 0; i < x; i++) 
    {
        r *= b;
    }
    cout << "el resultado es: " << r << endl;
    return 0;
}
