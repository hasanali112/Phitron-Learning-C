#include <stdio.h>

void print_N_1(int N)
{
    if (N == 0)
    {
        return;
    }

    if (N == 1)
    {
        printf("%d", N);
    }
    else
    {
        printf("%d ", N);
    }

    print_N_1(N - 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    print_N_1(N);
    return 0;
}