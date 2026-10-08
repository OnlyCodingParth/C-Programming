#include <stdio.h>

int main(void) {
    int age = 20;
    int has_id = 1;

    if (age >= 18) {
        if (has_id) {
            printf("Entry allowed.\n");
        } else {
            printf("Please show an identity card.\n");
        }
    } else {
        printf("Entry is for adults only.\n");
    }
    return 0;
}
