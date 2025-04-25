#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i = 1;

    while (i <= N)
    {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        int totalWork = a * c;
        int worker = a + b;
        int days = totalWork / worker;
        int dif = c - days;

        printf("%d\n", dif);
        i++;
    }

    return 0;
}