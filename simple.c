#include <stdio.h>
#include<string.h>
int main() {
    //char
    int num1, num2,num3;

    printf("Select a sign (+, -, *, /): ");
    scanf(" %d", &num3);

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    switch (num3) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}