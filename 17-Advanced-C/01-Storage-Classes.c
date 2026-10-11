#include <stdio.h>

void count_calls(void) {
    static int calls = 0; /* Retains its value between calls. */
    calls++;
    printf("Called %d time(s)\n", calls);
}

int main(void) {
    auto int local_value = 10;
    register int fast_hint = 20;
    count_calls();
    count_calls();
    printf("auto value: %d; register example: %d\n", local_value, fast_hint);
    return 0;
}
