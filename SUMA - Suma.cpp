#include <iostream>

using namespace std;

int main()
{

    int liczba, suma;
    cin >> liczba;
    suma = liczba;
    cout << liczba << endl;

    while (cin >> liczba)
    {
        suma += liczba;
        cout << suma << endl;
    }

    return 0;
}
