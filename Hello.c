#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int studentCount = 0;

    while (1) {
        char choice;
        printf("\nEnter 'a' to add a student, 's' to show students, or 'q' to quit: ");
        scanf(" %c", &choice);

        if (choice == 'a') {
            if (studentCount == MAX_STUDENTS) {
                printf("Maximum number of students reached!\n");
                continue;
            }
            printf("Enter student name: ");
            scanf("%s", students[studentCount].name);
            printf("Enter student age: ");
            scanf("%d", &students[studentCount].age);
            studentCount++;
        } else if (choice == 's') {
            printf("Students:\n");
            for (int i = 0; i < studentCount; i++) {
                printf("%d. Name: %s, Age: %d\n", i + 1, students[i].name, students[i].age);
            }
        } else if (choice == 'q') {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid input\n");
        }
    }

    return 0;
}
