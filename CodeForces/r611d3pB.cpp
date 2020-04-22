#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int ncases;
    scanf("%d", &ncases);
    while (ncases--)
    {
        int n, k;
        int candy = 0;

        scanf("%d%d", &n, &k);

        if (n >= k)
        {

            candy = (n / k) * k;
            n = n - (n / k) * k;
        }

        k = k / 2;
        if (k != 0)
        {
            if (n <= k)
                candy += n;

            else
                candy += k;
        }

        printf("%d\n", candy);
    }
    return 0;
}