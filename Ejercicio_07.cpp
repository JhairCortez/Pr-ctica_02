#include <iostream>
using namespace std;
int main() 
{
    int n, p = 1;
    cout << "ingrese un numero: ";
    cin >> n;
    if (n < 2) 
    {
        p = 0;
    } else 
    {
        for (int i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) 
            {
                p = 0;
                break;
            }
        }
    }
    if (p) 
    {
        cout << n << " es  primo." << endl;
    } else 
    {
        cout << n << " no es primo." << endl;
    }
    return 0;
}
