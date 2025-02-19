#include <stdio.h>

int main() {
    char inputOperator;
    double num1,num2;
    short end = 0;

    while (end==0) {
        printf("Input the first number: ");
        scanf("%lf", &num1);

        printf("Input an operator or E to exit, (+, -, *, /, E): ");
        scanf(" %c", &inputOperator);

        printf("Input the second number: ");
        scanf("%lf", &num2);

        switch(inputOperator) {
            case '+':
                printf("The result is: %lf", num1+num2);
                break;
            case '-':
            printf("The result is: %lf", num1-num2);
                break;
            case '*':
            printf("The result is: %lf", num1*num2);
                break;
            case '/':
                if (num2!=0) {
                    printf("The result is: %lf", num1/num2);
                } else {
                    printf("Undefined!");
                }
                break;
            case 'E': case 'e':
                end=1;
                break;
            default:
                printf("Invalid input!");
                break;
        }
        printf("\n\n");
    }
}