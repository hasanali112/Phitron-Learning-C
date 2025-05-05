
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int str[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 97;
        str[val]++;
    }

    for (int i = 0; i < 26; i++)
    {

        if (str[i] > 0)
        {
            printf("%c - %d\n", i + 97, str[i]);
        }
    }

    return 0;
}