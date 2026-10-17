#include <stdio.h>

int main()
{
    float balance = 500.00;   /* initial balance */
    float amount;
    int choice;

    do
    {
        printf("\nBSIT BANK\n");
        printf("Please Select your Transaction\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");

        /* if the user types a non-number, clear the input and retry */
        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n');
            choice = 0;
        }

        switch (choice)
        {
            case 1:
                printf("\nYour current balance: P%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                if (scanf("%f", &amount) != 1)
                {
                    while (getchar() != '\n');
                    printf("Invalid amount!\n");
                }
                else if (amount <= 0)
                {
                    printf("Invalid amount! Deposit must be greater than 0.\n");
                }
                else
                {
                    balance += amount;
                    printf("P%.2f deposited successfully!\n", amount);
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                if (scanf("%f", &amount) != 1)
                {
                    while (getchar() != '\n');
                    printf("Invalid amount!\n");
                }
                else if (amount <= 0)
                {
                    printf("Invalid amount! Withdrawal must be greater than 0.\n");
                }
                else if (balance - amount < 100.00)
                {
                    printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n");
                }
                else
                {
                    balance -= amount;
                    printf("You withdrew P%.2f successfully!\n", amount);
                }
                break;

            case 4:
                printf("\nThank you for banking with BSIT BANK!\n");
                break;

            default:
                printf("Invalid choice! Please select 1-4.\n");
        }
    } while (choice != 4);

    return 0;
}