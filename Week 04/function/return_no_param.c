#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = a + b;
    return result;
}

int main()
{
    int ans = sum();
    printf("%d", ans);
    return 0;
}