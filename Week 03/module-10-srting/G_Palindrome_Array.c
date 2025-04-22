#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = N - 1;
    int temp = 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            temp = 0;
            break;
        }

        i++;
        j--;
    }

    if (temp)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}