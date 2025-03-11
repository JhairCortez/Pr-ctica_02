#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b, c, d, x1, x2;
    cout << "Ingrese los coeficientes a, b y c: ";
    cin >> a >> b >> c;
    if (a == 0) 
    {
        if (b == 0) 
        {
            cout << (c == 0 ? "Infinitas soluciones" : "No hay solución") << endl;
        } else 
        {
            x1 = -c / b;
            cout << "Solución única: " << x1 << endl;
        }
    } else 
    {
        d = b * b - 4 * a * c;
        if (d > 0) 
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "Dos soluciones reales: " << x1 << " y " << x2 << endl;
        } else if (d == 0) 
        {
            x1 = -b / (2 * a);
            cout << "Solución doble: " << x1 << endl;
        } else 
        {
            cout << "No hay soluciones reales" << endl;
        }
    }
    return 0;
}
