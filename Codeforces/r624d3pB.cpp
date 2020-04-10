#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int ncase;
    cin >> ncase;
    while (ncase--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> p(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> p[i];
        }
        int flag = 1;

        for (int i = n - 1; i > 0; i--)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    if (std::find(p.begin(), p.end(), j + 1) != p.end())
                    {
                        int tmp;
                        tmp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = tmp;
                    }
                    else
                    {
                        flag = -1 ;
                    }
                    
                }
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = -1;
            }
        }

        if (flag == -1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}