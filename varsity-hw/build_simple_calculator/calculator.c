#include<stdio.h>

int main()
{

    float num1, num2, result;
    char operation;

    printf("Enter number1: ");
    scanf("%f", &num1);

    printf("Enter number2: ");
    scanf("%f", &num2);

    printf("Enter Operation: ");
    scanf(" %c", &operation);

    switch(operation)
    {
    case '+':
        result = num1 + num2;
        printf("Sum of %.2f and %.2f is: %.2f", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("substraction of %.2f and %.2f is: %.2f", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("multiplication of %.2f and %.2f is: %.2f", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("Sum of %.2f and %.2f is: %.2f", num1, num2, result);
        break;
    }

    return 0;
}
