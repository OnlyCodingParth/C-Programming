#include <stdio.h>
#include <string.h>
#define FILE_NAME "contacts.txt"
#define MAX_LINE 120
struct Contact { char name[40]; char phone[30]; };
static void add(void) {
    struct Contact contact; FILE *file = fopen(FILE_NAME, "a");
    if (!file) { perror(FILE_NAME); return; }
    printf("Name phone: "); scanf("%39s %29s", contact.name, contact.phone);
    fprintf(file, "%s %s\n", contact.name, contact.phone); fclose(file);
}
static void list(void) {
    char line[MAX_LINE]; FILE *file = fopen(FILE_NAME, "r");
    if (!file) { perror(FILE_NAME); return; }
    while (fgets(line, sizeof line, file)) printf("%s", line);
    fclose(file);
}
int main(void) {
    int choice;
    do {
        printf("\n1 Add 2 Display 3 Search by name 0 Exit\n");
        if (scanf("%d", &choice) != 1) return 1;
        if (choice == 1) add();
        else if (choice == 2) list();
        else if (choice == 3) {
            char wanted[40], name[40], phone[30]; int found = 0;
            FILE *file = fopen(FILE_NAME, "r");
            if (!file) { perror(FILE_NAME); continue; }
            printf("Name: "); scanf("%39s", wanted);
            while (fscanf(file, "%39s %29s", name, phone) == 2)
                if (strcmp(name, wanted) == 0) { printf("%s %s\n", name, phone); found = 1; }
            if (!found) printf("Contact not found.\n");
            fclose(file);
        }
    } while (choice != 0);
    return 0;
}
