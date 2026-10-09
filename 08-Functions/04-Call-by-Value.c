#include <stdio.h>
void change_copy(int number) {
    number = 99;
    printf("Inside function: parameter = %d\n", number);
}
int main(void) {
    int original = 10;
    change_copy(original);
    printf("Original remains %d because C passes a copy.\n", original);
    return 0;
}
