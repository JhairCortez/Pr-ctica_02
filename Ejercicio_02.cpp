#include <iostream>
using namespace std;

int main() 
{
    int n, c = 0, a = 1;
    cout << "ingrese un numero: ";
    cin >> n;
    while (c < n) 
    {
        if (a % 3 == 0) 
        {
            cout << a << " ";
            c++;
        }
        a++;
    }
    cout << endl;
    return 0;
}
