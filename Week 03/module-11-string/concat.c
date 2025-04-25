#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int length = strlen(b);
    int length1 = strlen(a);
    for (int i = 0; i <= length; i++)
    {
        a[length1 + i] = b[i];
    }
    int i = 0;
    int j = length1 - 1;
    while (i < j)
    {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    printf("%s", a);

    return 0;
}