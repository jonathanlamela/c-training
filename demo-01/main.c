#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 2;
    int b = 3;
    printf("Sum: %d\n", sum(a, b));
    printf("Multiply: %d\n", multiply(a, b));

    return 0;
}
