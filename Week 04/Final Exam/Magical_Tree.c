#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int star = 1;
    int space = (N + 1) / 2 + 5 - 1;
    for (int i = 1; i <= (N + 1) / 2 + 5; i++)
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

    int space_track = (N + 1) / 2 + 5;
    int space_2 = ((space_track * 2) - 1 - N) / 2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= space_2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= N; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}