#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i = 1;
    while (i <= N)
    {
        char s[100001];
        scanf("%s", s);
        int smallCount = 0;
        int capitalCount = 0;
        int digitCount = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                smallCount++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capitalCount++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digitCount++;
            }
        }
        printf("%d %d %d", capitalCount, smallCount, digitCount);
        printf("\n");
        i++;
    }

    return 0;
}