#include <iostream>

using namespace std;

int main()
{
    float k,m;

    cin >> k;

    m = k/1.609344;

    if ((m >= 0) && (m < 300))
    {
        cout << "NIE" << endl;
    }
    if ((m >= 300) && (m < 500))
    {
        cout << "SPRAWDZIMY TWOJE OBECNE BUTY" << endl;
    }
    if (m >= 500)
    {
        cout << "TAK" << endl;
    }

    return 0;
}
