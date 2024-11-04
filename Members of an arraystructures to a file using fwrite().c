#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int marks;
} Student;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    FILE *file = fopen("students.dat", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return 1;
    }

    Student student;
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student.name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &student.marks);

        fwrite(&student, sizeof(Student), 1, file);
    }
    fclose(file);
    printf("Data of %d students appended to file successfully.\n", n);

    return 0;
}