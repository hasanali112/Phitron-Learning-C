#include <stdio.h>

void hello(int i)
{
    if (i == 101)
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1);
}
int main()
{
    int i;
    scanf("%d", &i);
    hello(i);
    return 0;
}