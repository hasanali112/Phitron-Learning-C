#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &n);
    }
    int star = 1;
    int space = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }

    return 0;
}