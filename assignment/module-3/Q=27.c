//information -print and display empno, empname, address and age
#include <stdio.h>
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};
void inputEmployee(struct Employee *emp) {
    printf("Enter employee number: ");
    scanf("%d", &emp->empno);

    printf("Enter employee name: ");
    scanf("%s", emp->empname);
    printf("Enter employee address: ");
    scanf("%s", emp->address);
    printf("Enter employee age: ");
    scanf("%d", &emp->age);
}
void displayEmployee(const struct Employee *emp) {
    printf("Employee Number: %d\n", emp->empno);
    printf("Employee Name: %s\n", emp->empname);
    printf("Employee Address: %s\n", emp->address);
    printf("Employee Age: %d\n", emp->age);
}
int main() {
    struct Employee emp;
    inputEmployee(&emp);
    printf("\nEmployee Information:\n");
    displayEmployee(&emp);
    return 0;
}

