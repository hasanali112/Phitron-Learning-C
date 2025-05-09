#include <stdio.h>

void odd_even()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int ev_count = 0;
    int od_count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            ev_count++;
        }
        else
        {
            od_count++;
        }
    }
    printf("%d %d", ev_count, od_count);
}

int main()
{

    odd_even();

    return 0;
}