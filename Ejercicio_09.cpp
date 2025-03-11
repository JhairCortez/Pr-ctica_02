#include <iostream>
using namespace std;

bool esp(int n) 
{
    int sd = 0;
    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0) 
        {
            sd += i;
        }
    }
    return sd == n;
}
int main() 
{
    int n;
    cout << "ingrese un numero: ";
    cin >> n;
    if (esp(n)) 
    {
        cout << n << " es perfecto." << endl;
    } else 
    {
        cout << n << " no es perfecto." << endl;
    }
    return 0;
}
