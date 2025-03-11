#include <iostream>
using namespace std;

int main() 
{
    int n, f = 1;
    cout << "ingrese un número: ";
    cin >> n;
    if (n < 0) 
    {
        cout << "el no esta def por negativos." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) 
    {
        f *= i;
    }
    cout << "el factorial de " << n << " es: " << f << endl;
    return 0;
}
