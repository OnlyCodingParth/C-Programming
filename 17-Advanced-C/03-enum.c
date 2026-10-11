#include <stdio.h>

enum Priority { LOW, MEDIUM, HIGH = 5, URGENT };

int main(void) {
    enum Priority task_priority = URGENT;
    printf("LOW=%d MEDIUM=%d HIGH=%d URGENT=%d\n",
           LOW, MEDIUM, HIGH, URGENT);
    printf("Selected priority: %d\n", task_priority);
    return 0;
}
