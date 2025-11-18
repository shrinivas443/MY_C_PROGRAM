#include <stdio.h>

int main()
{
    int num;
    float num2;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float value: ");
    scanf("%f", &num2);
    printf("You entered integer: %d\n", num);
    printf("You entered float: %.2f\n", num2);

}