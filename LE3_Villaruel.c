#include<stdio.h>
int main(){
    char name[50];
    char section[15];
    int num1;
    int num2;

    printf("Enter your complete name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your complete section: ");
    fgets(section, sizeof(section), stdin);

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    
    int add = num1 + num2;
    int sub = num1 - num2;
    int mult = num1 * num2;
    float div = (float)num1 / num2;

    printf("\nStudent Calculator\n");
    printf("Student name: %s", name);
    printf("Student section: %s", section);
    
    printf("results:\n");
    printf("%d + %d = %d \n", num1 , num2, add);
    printf("%d - %d = %d \n", num1 , num2, sub);
    printf("%d * %d = %d \n", num1 , num2, mult);
    printf("%d / %d = %.2f \n", num1 , num2, div);

    return 0;
}
