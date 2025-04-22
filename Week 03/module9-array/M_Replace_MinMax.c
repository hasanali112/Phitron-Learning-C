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
    int i = 0;
    int j = N - 1;
    int min = 0;
    int max = 0;
    int temp = 0;
    while (i < j)
    {
        if (arr[i] < arr[j] || arr[i] > arr[j])
        {
            min = i;
            max = j;
        }

        i++;
        j--;
    }

    temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}