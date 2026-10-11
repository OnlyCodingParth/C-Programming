#include <stdio.h>

static void show_menu(void) {
    printf("\n1 Add  2 Subtract  3 Multiply  4 Divide  5 Modulus  0 Exit\n");
}
int main(void) {
    int choice;
    do {
        show_menu();
        if (scanf("%d", &choice) != 1) return 1;
        if (choice == 0) break;
        int first, second;
        printf("Enter two integers: ");
        if (scanf("%d %d", &first, &second) != 2) return 1;
        switch (choice) {
            case 1: printf("Result: %d\n", first + second); break;
            case 2: printf("Result: %d\n", first - second); break;
            case 3: printf("Result: %d\n", first * second); break;
            case 4:
                if (second == 0) printf("Cannot divide by zero.\n");
                else printf("Result: %.2f\n", (double)first / second);
                break;
            case 5:
                if (second == 0) printf("Cannot use modulus by zero.\n");
                else printf("Result: %d\n", first % second);
                break;
            default: printf("Invalid choice.\n");
        }
    } while (1);
    return 0;
}
