#include <iostream>
using namespace std;

bool esp(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main() 
{
    int n;
    cout << "ingrese un numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        if (esp(i)) 
        {
            cout << i << " es primo" << endl;
        } else 
        {
            cout << i << " no es primo" << endl;
        }
    }
    return 0;
}
