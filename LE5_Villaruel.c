#include<stdio.h>

int main(){
    int num;
    int sum = 0;

    printf("Enter a positive number to ADD (zero or negative number to STOP)\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num > 0){
        sum += num;

        printf("Enter a number: ");
        scanf("%d",&num);
    }
    printf("The sum is: %d", sum);

    return 0;
}