#include <stdio.h>
int main()
{
    int a, b, c;
    long long int d;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%lld", &d);

        if (a + b - c == d)
    {
        printf("YES");
    }
    else if (a - b + c == d)
    {
        printf("YES");
    }
    else if (a + (long long)b * c == d)
    {
        printf("YES");
    }
    else if ((long long)a * b + c == d)
    {
        printf("YES");
    }
    else if (a - (long long)b * c == d)
    {
        printf("YES");
    }
    else if ((long long)a * b - c == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}