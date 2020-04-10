#include <bits/stdc++.h>

using namespace std;

int main()
{
    int alphabet[26];
    int ncase;
    cin >> ncase;
    while (ncase--)
    {
        memset(alphabet, 0, sizeof(alphabet));
        long long n, m;

        scanf("%lld%lld", &n, &m);

        char combo[20010];
        scanf("%s", combo);

        int tries[20010];
        memset(tries, 0, sizeof(tries));
        for (int i = 0; i < m; i++)
            cin >> tries[i];

        tries[m] = n;

        for (int i = 0; i < m + 1; i++)
        {
            for (int j = 0; j < tries[i]; j++)
            {
                alphabet[combo[j] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            printf("%d ", alphabet[i]);
        }
        printf("\n");
    }
    return 0;
}