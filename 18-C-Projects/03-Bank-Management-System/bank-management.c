#include <stdio.h>
#define MAX_ACCOUNTS 50
struct Account { int number; char owner[40]; double balance; };
static int find(const struct Account accounts[], int count, int number) {
    for (int i = 0; i < count; i++) if (accounts[i].number == number) return i;
    return -1;
}
int main(void) {
    struct Account accounts[MAX_ACCOUNTS]; int count = 0, choice;
    do {
        printf("\n1 Create 2 Display 3 Deposit 4 Withdraw 5 Balance 6 Search 0 Exit\n");
        if (scanf("%d", &choice) != 1) return 1;
        if (choice == 1 && count < MAX_ACCOUNTS) {
            struct Account account;
            printf("Number owner: "); scanf("%d %39s", &account.number, account.owner);
            account.balance = 0;
            if (find(accounts, count, account.number) < 0) accounts[count++] = account;
            else printf("Account exists.\n");
        } else if (choice >= 2 && choice <= 6) {
            int number; printf("Account number: "); scanf("%d", &number);
            int index = find(accounts, count, number);
            if (index < 0) { printf("Account not found.\n"); continue; }
            if (choice == 2 || choice == 6) printf("%d | %s | %.2f\n", accounts[index].number, accounts[index].owner, accounts[index].balance);
            else if (choice == 5) printf("Balance: %.2f\n", accounts[index].balance);
            else {
                double amount; printf("Amount: "); scanf("%lf", &amount);
                if (amount < 0 || (choice == 4 && amount > accounts[index].balance)) printf("Invalid amount.\n");
                else if (choice == 3) accounts[index].balance += amount;
                else accounts[index].balance -= amount;
            }
        }
    } while (choice != 0);
    return 0;
}
