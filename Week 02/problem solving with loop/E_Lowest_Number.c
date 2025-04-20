#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int minIndx = 0;
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            minIndx = i;
        }
    }
    printf("%d %d", min, minIndx + 1);
    return 0;
}