#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }

    int star1 = n + 2;
    int space1 = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= space1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star1; j++)
        {
            printf("*");
        }

        printf("\n");
        star1 -= 2;
        space1++;
    }

    return 0;
}