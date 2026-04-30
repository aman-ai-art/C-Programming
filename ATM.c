#include <stdio.h>
int main() {
    int pin = 789, check_pin, balance = 55000, choice, deposit, withdraw;
    int attempts = 0, authenticated = 0;
    while (attempts < 3) {
        printf("Enter your ATM pin: ");
        scanf("%d", &check_pin);
        if (check_pin == pin) {
            authenticated = 1;
            break;
        } else {
            attempts++;
            printf("Wrong pin. Attempts left: %d\n", 3 - attempts);
        }
    }
    if (authenticated) {
        int running = 1;
        while (running) {
            printf("\n--- MENU ---\n");
            printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
            printf("Choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Your balance is: %d\n", balance);
                    break;
                case 2:
                    printf("Enter deposit amount: ");
                    scanf("%d", &deposit);
                    balance += deposit;
                    printf("Update successful!\n");
                    break;
                case 3:
                    printf("Enter withdrawal amount: ");
                    scanf("%d", &withdraw);
                    if (withdraw > balance) {
                        printf("Error: Insufficient funds!\n");
                    } else {
                        balance -= withdraw;
                        printf("Please collect your cash.\n");
                    }
                    break;
                case 4:
                    running = 0;
                    break;
                default:
                    printf("Invalid option.\n");
            }
        }
    } else {
        printf("Too many wrong attempts. Card Blocked.\n");
    }

    printf("\nThank you for using our ATM. Have a good day!\n");
    return 0;
}
