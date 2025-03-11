#include <iostream>
using namespace std;

int main() 
{
    int n, a = 0, b = 1, s;
    cout << "ingrese la cantidad de terminos: ";
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cout << a << " ";
        s = a + b;
        a = b;
        b = s;
    }
    cout << endl;
    return 0;
}
