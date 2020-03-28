#include <iostream>

using namespace std;

int main()
{
    int ncases;
    cin >> ncases;

    while (ncases--)
    {
        int a, b;

        cin >> a >> b;

        cout << (b - a % b) % b << endl;
    }
    return 0;
}
