#include <iostream>
using namespace std;

int main() 
{
    int n,s;
    cout<< "ingrese unnumero: "<< endl;
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        s += i;
    }
    cout << "la suma de:  " << n << " numeros naturales es: " << s << endl;
    return 0;
}
