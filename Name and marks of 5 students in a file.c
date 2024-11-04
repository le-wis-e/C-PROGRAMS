#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int marks;
} Student;

int main() {
    FILE *file = fopen("students.dat", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    fwrite(students, sizeof(Student), 5, file);
    fclose(file);
    printf("Data of 5 students written to file successfully.\n");

    return 0;
}