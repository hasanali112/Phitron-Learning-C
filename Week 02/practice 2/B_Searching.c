#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int findIdx, findVal;
    scanf("%d", &findIdx);
    for (int i = 0; i < N; i++)
    {
        if (findIdx == A[i])
        {
            findVal = i;
            break;
        }
        else
        {
            findVal = -1;
        }
    }

    printf("%d\n", findVal);

    return 0;
}