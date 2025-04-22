#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int val = a - b;
        printf("%d", val);
    }
    else
    {
        printf("0");
    }
    return 0;
}