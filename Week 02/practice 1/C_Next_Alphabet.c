#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'Z')
    {
        printf("%c", 'A');
    }
    else if (ch == 'z')
    {
        printf("%c", 'a');
    }
    else
    {
        printf("%c", ch + 1);
    }

    return 0;
}