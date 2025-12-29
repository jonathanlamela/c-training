#include <stdio.h>

int main()
{
    int first_number = 0;
    int second_number = 0;

    printf("Enter the first number:");
    scanf("%d", &first_number);

    printf("Enter the second number:");
    scanf("%d", &second_number);

    printf("The sum is: %d\n", first_number + second_number);

    return 0;
}
