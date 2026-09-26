#include <stdio.h>

// Function prototypes
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("\nError: Division by zero is not allowed.\n");
        return 0; 
    }
    return (float)a / b;
}

int main() {
    int num1, num2;
    int choice;

    do {
        printf("Multiple function to perform Arithmetic Operations\n\n");

        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("\nChoose Operation:\n");
        printf("[1]. Add\n");
        printf("[2]. Subtract\n");
        printf("[3]. Multiply\n");
        printf("[4]. Divide\n");
        printf("[5]. Exit\n");

        printf("Enter your choice [1-5]: ");
        scanf("%d", &choice);
        
        printf("\n");

        // Perform the selected operation based on user choice
            switch (choice) {
            case 1:
                printf("\n%d + %d = %d\n\n", num1, num2, add(num1, num2));
                break;

            case 2:
                printf("\n%d - %d = %d\n\n", num1, num2, subtract(num1, num2));
                break;

            case 3:
                printf("\n%d * %d = %d\n\n", num1, num2, multiply(num1, num2));
                break;
                
            case 4:
                printf("\n%d / %d = %.2f\n\n", num1, num2,divide(num1, num2));
                break;

            case 5:
                printf("\nExiting the program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

        printf("\n");
    } while (choice != 5); 

    return 0;
}
