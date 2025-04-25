#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], b[101];
    scanf("%s %s", &s, &b);
    int val = strcmp(s, b);
    if (val < 0)
    {
        printf("A is small");
    }
    else if (val > 0)
    {
        printf("B is small");
    }
    else
    {
        printf("Equal");
    }

    return 0;
}