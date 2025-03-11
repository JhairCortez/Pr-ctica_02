#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "ingrese un numero: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) 
    {
        cout << i << "*" << n << "=" << i * n;
        if (i < 10) 
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
