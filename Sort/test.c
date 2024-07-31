#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    int arr[100000] = { 0 };
    scanf("%d", &n);
    int i = 0;
    int tmp = 0;
    int max = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &tmp);
        arr[tmp] = tmp;
        if (max < tmp)
        {
            max = tmp;
        }
    }

    for (i = 0; i <= max; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}