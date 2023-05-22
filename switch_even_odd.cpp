#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int v;
    cin >> v;

    switch (v % 2)
    {
    case 0:
        cout << "Even" << endl;
        break;
    case 1:
        cout << "Odd" << endl;
        break;

    default:
        break;
    }
    return 0;
}