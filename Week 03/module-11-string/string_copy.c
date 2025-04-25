#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int length = strlen(b);
    for (int i = 0; i <= length - 3; i++)
    {

        a[i] = b[i];
        a[i + 2] = '\0';
    }

    printf("%s %s", a, b);
    return 0;
}