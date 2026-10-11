#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 50
struct Student { int id; char name[40]; float marks; };
static void display(const struct Student students[], int count) {
    for (int i = 0; i < count; i++) printf("%d | %s | %.1f\n", students[i].id, students[i].name, students[i].marks);
}
static int find(const struct Student students[], int count, int id) {
    for (int i = 0; i < count; i++) if (students[i].id == id) return i;
    return -1;
}
int main(void) {
    struct Student students[MAX_STUDENTS] = {{1, "Asha", 88.0f}, {2, "Noah", 94.0f}};
    int count = 2, choice;
    do {
        printf("\n1 Add 2 Display 3 Search 4 Update 5 Delete 0 Exit\n");
        if (scanf("%d", &choice) != 1) return 1;
        if (choice == 1 && count < MAX_STUDENTS) {
            struct Student student;
            printf("ID name marks: ");
            scanf("%d %39s %f", &student.id, student.name, &student.marks);
            if (find(students, count, student.id) == -1) students[count++] = student;
            else printf("ID already exists.\n");
        } else if (choice == 2) display(students, count);
        else if (choice == 3 || choice == 4 || choice == 5) {
            int id; printf("ID: "); scanf("%d", &id);
            int index = find(students, count, id);
            if (index < 0) printf("Student not found.\n");
            else if (choice == 3) printf("%d | %s | %.1f\n", students[index].id, students[index].name, students[index].marks);
            else if (choice == 4) { printf("New name and marks: "); scanf("%39s %f", students[index].name, &students[index].marks); }
            else { students[index] = students[--count]; }
        }
    } while (choice != 0);
    return 0;
}
