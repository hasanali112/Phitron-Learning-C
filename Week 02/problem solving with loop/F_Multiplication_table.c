#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= 12)
    {
        int result = n * i;
        printf("%d * %d = %d\n", n, i, result);
        i++;
    }
    return 0;
}