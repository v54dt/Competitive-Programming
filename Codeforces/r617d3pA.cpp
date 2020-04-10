#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ncase;
    scanf("%d", &ncase);
    while (ncase--)
    {
        int n;
        scanf("%d", &n);

        //vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            sum = sum ^ tmp;
        }
        //cout << sum << endl;
        if (sum%2 ==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}