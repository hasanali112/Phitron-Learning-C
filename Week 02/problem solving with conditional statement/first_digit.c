#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int num = X / 1000;
    if (num % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}