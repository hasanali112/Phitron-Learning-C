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
    int min = arr[0], max = arr[0], minIndex = 0, maxIndex = 0;
    for (int i = 1; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    return 0;
}