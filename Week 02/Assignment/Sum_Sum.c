#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum = 0;
    int sub = 0;
    for (int i = 1; i <= N; i++)
    {
        int x;
        scanf("%d", &x);
        if (x >= 0)
        {
            sum += x;
        }
        else
        {
            sub += x;
        }
    }

    printf("%d %d", sum, sub);
    return 0;
}