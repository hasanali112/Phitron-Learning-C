#include <stdio.h>

void sum(int a, int b)
{

    int result = a + b;
    printf("%d", result);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);

    return 0;
}