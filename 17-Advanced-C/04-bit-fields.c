#include <stdio.h>

struct Flags {
    unsigned int enabled : 1;
    unsigned int level : 3;
    unsigned int reserved : 4;
};

int main(void) {
    struct Flags flags = {1, 5, 0};
    printf("Enabled: %u, level: %u\n", flags.enabled, flags.level);
    printf("Bit-field layout and allocation are implementation-dependent.\n");
    return 0;
}
