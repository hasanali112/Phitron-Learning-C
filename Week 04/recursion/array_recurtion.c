#include <stdio.h>

void print_recurtion(int n)
{
    if (n == 0)
    {
        return;
    }

    print_recurtion(n - 1);
    printf("%d\n", n);
}
int main()
{
    int N;
    scanf("%d", &N);
    print_recurtion(N);
    return 0;
}