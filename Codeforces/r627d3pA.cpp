#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ncases;
    cin >> ncases;
    while (ncases--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if ((arr[0] % 2 == 0) != (arr[i] % 2 == 0))
            {

                ans = 0;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}