#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a != 0 && a % b == 0)
    {
        printf("Yes");
    }
    else if (b != 0 && b % a == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}