#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);
    printf("adress of ptr=> %p\n", &ptr);
    return 0;
}