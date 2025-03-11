#include <iostream>
using namespace std;

int main() 
{
    double s = 0, n;

    for (int i = 1; i <= 10; i++) 
    {
        cout << "ingrese un número " << i << ": ";
        cin >> n;
        s += n;
    }
    cout << "la suma es: " << s << endl;
    cout << "el promedio es: " << s / 10 << endl;

    return 0;
}
