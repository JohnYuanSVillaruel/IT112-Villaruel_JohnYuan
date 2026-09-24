#include<stdio.h>

int main(){

    int i;
    float daily,total = 0.0, average;
    float goal = 500.00;

    printf("==============================\n");
    printf("    DAILY SAVINGS TRACKER     \n");
    printf("==============================\n");

    for(i=1; i<=7; i++){
        printf("Enter savings for Day %d :", i);
        scanf("%f",&daily);
        
        total += daily;
    }

     average = total / 7.0;

    printf("\n==============================\n");
    printf("        SAVINGS SUMMARY       \n");
    printf("==============================\n");

    printf("Total Savings: PHP %.2f\n",total);
    printf("Daily Average: PHP %.2f\n",average);

    if(total >= goal){
        printf("Status: GOAL REACHED\n");
    }else{
        printf("Status: GOAL NOT REACHED\n");
        printf("You need PHP %.2f more to reach your goal.\n", goal - total);


    }   
    printf("==============================\n");
    return 0;
}