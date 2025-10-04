
#include <stdio.h>

int main() {
    int balance = 1000;  // starting balance
    int amount;

    while(balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%d", &amount);
        balance -= amount;
        printf("Remaining balance: %d\n", balance);
    }

    printf("Account balance is zero or negative.\n");
    return 0;
}

