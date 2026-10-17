#include <stdio.h>

// Function declaration
void displayHeader();

int main() {
    char runAgain;

    // Outer loop to run the entire program again if the user chooses 'y'
    do {
        float goalAmount = 0.0;
        float currentSavings = -1.0;
        float weeklyDeposit = 0.0;
        int weekCount = 0;

        displayHeader();

        // 1. Get and validate Target Goal
        while (goalAmount <= 0) {
            printf("Enter your target savings goal ($): ");
            if (scanf("%f", &goalAmount) != 1) {
                printf("[Error] Invalid input. Please enter a valid number.\n");
                while (getchar() != '\n'); // Clear buffer
            } else if (goalAmount <= 0) {
                printf("[Error] Goal amount must be greater than zero.\n");
            }
        }

        // 2. Get and validate Current Savings
        while (currentSavings < 0) {
            printf("Enter your current starting savings ($): ");
            if (scanf("%f", &currentSavings) != 1) {
                printf("[Error] Invalid input. Please enter a valid number.\n");
                while (getchar() != '\n');
            } else if (currentSavings < 0) {
                printf("[Error] Current savings cannot be negative.\n");
            }
        }

        // Check if goal is already met
        if (currentSavings >= goalAmount) {
            printf("\nCongratulations! You have already reached or exceeded your goal!\n");
        } else {
            // 3. Get and validate Weekly Deposit
            while (weeklyDeposit <= 0) {
                printf("Enter how much you plan to save each week ($): ");
                if (scanf("%f", &weeklyDeposit) != 1) {
                    printf("[Error] Invalid input. Please enter a valid number.\n");
                    while (getchar() != '\n');
                } else if (weeklyDeposit <= 0) {
                    printf("[Error] Weekly deposit must be greater than zero.\n");
                }
            }

            printf("\n-----------------------------------\n");
            printf("        SIMULATING YOUR SAVINGS     \n");
            printf("-----------------------------------\n");

            // Inner loop: Runs week-by-week until goal is met
            while (currentSavings < goalAmount) {
                weekCount++;
                
                // Arithmetic operations: Adding weekly deposit and updating total
                currentSavings += weeklyDeposit;

                printf("Week %d: Saved $%.2f | Total: $%.2f\n", weekCount, weeklyDeposit, currentSavings);

                // Milestone check
                if (currentSavings >= goalAmount / 2 && currentSavings - weeklyDeposit < goalAmount / 2) {
                    printf(" >> Milestone Reached: You are halfway to your goal!\n");
                }
            }

            // Final Summary Report
            printf("-----------------------------------\n");
            printf("          SAVINGS COMPLETE         \n");
            printf("-----------------------------------\n");
            printf("Target Goal:      $%.2f\n", goalAmount);
            printf("Total Weeks:      %d weeks\n", weekCount);
            printf("Final Savings:    $%.2f\n", currentSavings);
            
            float monthsEquivalent = weekCount / 4.0;
            printf("Approx. Time:     ~%.1f months (assuming 4 wks/mo)\n", monthsEquivalent);
        }

        // Ask user if they want to calculate another goal
        printf("===================================\n");
        printf("Do you want to calculate another goal? (y/n): ");
        scanf(" %c", &runAgain); // Note the space before %c to catch trailing newlines
        printf("\n\n");

    } while (runAgain == 'y' || runAgain == 'Y');

    printf("Thank you for using the Personal Savings Goal Calculator. Goodbye!\n");
    return 0;
}

// Function definition
void displayHeader() {
    printf("===================================\n");
    printf("  PERSONAL SAVINGS GOAL CALCULATOR \n");
    printf("==================================\n");
}