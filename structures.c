#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    char reg_no[20];
    char email[30];
    int phone_no;
    int ID;
    float marks;
} student1, student2;

int main() {
    //struct student1, student2;

    strcpy(student1.name, "Gadafi");
    strcpy(student1.reg_no, "BCS-05-0125/2024");
    strcpy(student1.email, "gikonoyoted@gmail.com");
    student1.phone_no = 112050130;
    student1.ID = 3456784;
    student1.marks = 87.6;

    printf("Name: %s\n", student1.name);
    printf("Reg No: %s\n", student1.reg_no);
    printf("Email: %s\n", student1.email);
    printf("Phone No: %d\n", student1.phone_no);
    printf("ID: %d\n", student1.ID);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}