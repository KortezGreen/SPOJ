#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szachy;
    getline(cin, szachy);

    char a = szachy.at(0);
    char b = szachy.at(3);
    char c = szachy.at(1);
    char d = szachy.at(4);

    if ((a == b) || (c == d))
    {
        cout << "TAK" << endl;
    }
    else
    {
        cout << "NIE" << endl;
    }

    return 0;
}
