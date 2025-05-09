#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int hashTracker = 1;
    int spaceTracker = n - 1;

        for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= spaceTracker; j++)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            for (int j = 1; j <= hashTracker; j++)
            {
                printf("-");
            }
        }
        else
        {
            for (int j = 1; j <= hashTracker; j++)
            {
                printf("#");
            }
        }

        printf("\n");
        if (i < n)
        {
            hashTracker += 2;
            spaceTracker--;
        }
        else
        {
            hashTracker -= 2;
            spaceTracker++;
        }
    }

    return 0;
}