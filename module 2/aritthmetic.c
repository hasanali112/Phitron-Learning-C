#include <stdio.h>
int main()
{

    float a = 8;
    int b = 5;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float dvd = a / b;
    printf("sum = %d\n", sum);
    printf("sub = %d\n", sub);
    printf("mul = %d\n", mul);
    printf("dvd = %.1f", dvd);

    return 0;
}