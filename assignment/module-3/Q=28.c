//Write a program of structure for five employee that provides the followinginformation -print and display empno, empname, address and age
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
    printf("\n");
}
int main() {
	int i;
    struct Employee employees[5]; 
    for ( i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }
    printf("\nEmployee Information:\n");
    for ( i = 0; i < 5; i++) {
        printf("Details for employee %d:\n", i + 1);
        displayEmployee(&employees[i]);
    }
    return 0;
}

