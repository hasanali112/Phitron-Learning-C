#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N + 1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int idx, value;
    scanf("%d %d", &idx, &value);
    for (int i = N; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = value;
    for (int i = 0; i < N + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}