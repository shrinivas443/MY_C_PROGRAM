#include <stdio.h>
int main() {
    int num1, num2, temp;
    printf("balance in acc befor: ");
    scanf("%d", &num1);
    printf("balance in acc after: ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    temp = num1;   
    num1 = num2;   
    num2 = temp;   
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
}