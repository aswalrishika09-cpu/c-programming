#include <stdio.h>
int main() {
    char operator;
    float num1, num2, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        
        default:
            printf("Error! Invalid operator.\n");
            
    }

    
    printf("%f %c %f = %f\n", num1, operator, num2, result);

    return 0; 
}
