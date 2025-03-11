#include <iostream>
using namespace std;

int main() 
{
    int n, s = 0;
    cout << "ingeese un numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        s += i * i;
    }
    cout << "La suma de " << n << " numeros naturales es: " << s << endl;
    return 0;
}
