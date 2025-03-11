#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b, c, d, x1, x2;
    cout << "ingrese a b y c: ";
    cin >> a >> b >> c;
    if (a == 0) 
    {
        if (b == 0) 
        {
            cout << (c == 0 ? "infinitas soluciones" : "no hay solucion") << endl;
        } else 
        {
            x1 = -c / b;
            cout << "solucion unica: " << x1 << endl;
        }
    } else 
    {
        d = b * b - 4 * a * c;
        if (d > 0) 
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "2 soluciones: " << x1 << " y " << x2 << endl;
        } else if (d == 0) 
        {
            x1 = -b / (2 * a);
            cout << "solucion doble: " << x1 << endl;
        } else 
        {
            cout << "no hay solucionesreales" << endl;
        }
    }
    return 0;
}
