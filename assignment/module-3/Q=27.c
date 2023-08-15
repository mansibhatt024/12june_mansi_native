//information -print and display empno, empname, address and age
#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee obj;

    printf("Enter employee number: ");
    scanf("%d", &obj.empno);

    printf("Enter employee name: ");
    scanf(" %[^\n]", obj.empname);

    printf("Enter employee address: ");
    scanf(" %[^\n]", obj.address);

    printf("Enter employee age: ");
    scanf("%d", &obj.age);

    printf("\nEmployee number is: %d", obj.empno);
    printf("\nEmployee name is: %s", obj.empname);
    printf("\nEmployee address is: %s", obj.address);
    printf("\nEmployee age is: %d\n", obj.age);

    return 0;
}

