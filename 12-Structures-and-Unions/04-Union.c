#include <stdio.h>
struct Pair { int number; float decimal; };
union Value { int number; float decimal; };
int main(void) {
    struct Pair pair = {10, 2.5f};
    union Value value;
    value.number = 10;
    printf("Structure keeps both: %d and %.1f\n", pair.number, pair.decimal);
    printf("Union currently stores: %d\n", value.number);
    value.decimal = 2.5f;
    printf("After writing decimal, union decimal is %.1f; members share memory.\n", value.decimal);
    return 0;
}
