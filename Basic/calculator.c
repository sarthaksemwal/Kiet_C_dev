#include<stdio.h>

int main() {
    int a, b;
    char op;

    while (1) {
        printf("Enter a (enter 0 to exit): ");
        scanf("%d", &a);

        if (a == 0) {
            break;
        }

        printf("Enter b: ");
        scanf("%d", &b);

        printf("Enter operation: ");
        scanf(" %c", &op);

        switch (op) {
            case '+':
                printf("The addition is: %d\n", a + b);
                break;
            case '-':
                printf("The subtraction is: %d\n", a - b);
                break;
            case '*':
                printf("The multiplication is: %d\n", a * b);
                break;
            case '/':
                if (b == 0) {
                    printf("Cannot divide by zero\n");
                } else {
                    printf("The division is: %d\n", a / b);
                }
                break;
            default:
                printf("Wrong operator\n");
        }
    }

    return 0;
}
