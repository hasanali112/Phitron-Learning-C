#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star--;
    };
    int star_1 = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= star_1; j++)
        {
            printf("*");
        }

        printf("\n");
        star_1++;
    }
    return 0;
}