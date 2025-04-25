#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
        else
        {
            count2++;
        }
    }

    printf("%d\n", count2);
    return 0;
}