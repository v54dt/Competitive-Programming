#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int ncases;
    scanf("%i", &ncases);

    while (ncases--)
    {
        int n;
        scanf("%i", &n);

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        //odd
        int flag = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] == arr[i + 1])
            {
                flag = 1;
            }
        }

        //even
        for (int i = 1; i < n - 2; i++)
        {
            if ((arr[i] == arr[i + 1]) && arr[i - 1] == arr[i + 2])
            {
                flag = 1;
            }
        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}