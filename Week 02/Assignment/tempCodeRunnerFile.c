#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int X, V;
    scanf("%d %d", &X, &V);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr[N - 1] = V;
    for (int i = 0; i < N; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}