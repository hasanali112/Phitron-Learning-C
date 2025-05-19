#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int M;
        scanf("%lld", &M);
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        long long int result = M / (A * B * C);
        if (M == A * B * C * result)
        {
            printf("%lld", result);
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }

    return 0;
}