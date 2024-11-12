//Defining a structure named employee
#include <stdio.h>
#include <string.h>

struct Employee{
char name[25];
int id;
char department[20];
float salary;
char email[50];
}Employee;
int main() {
    //struct Employee
strcpy(Employee.name,"John Doe");
Employee.id = 12345;
strcpy(Employee.department, "Human resource");
Employee.salary = 55000.50;
strcpy(Employee.email, "john.doe@company.com");

printf("name: %s\n", Employee.name);
printf("id: %d\n", Employee.id);
printf("department: %s\n", Employee.department);
printf("salary: %.2f\n", Employee.salary);
printf("email: %s\n", Employee.email);

return 0;
    
}