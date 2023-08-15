//Write a program of structure for five employee that provides the followinginformation -print and display empno, empname, address and age
#include <stdio.h>

struct empdata {
    int empno;
    char empname[10];
    char empaddress[20];
    int empage;
};

int main() {
    struct empdata obj[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter employee number: ");
        scanf("%d", &obj[i].empno);

        printf("Enter employee name: ");
        scanf(" %[^\n]", obj[i].empname);

        printf("Enter employee address: ");
        scanf(" %[^\n]", obj[i].empaddress);

        printf("Enter employee age: ");
        scanf("%d", &obj[i].empage);
    }

    for (i = 0; i < 5; i++) {
        printf("\nEmployee number is: %d", obj[i].empno);
        printf("\nEmployee name is: %s", obj[i].empname);
        printf("\nEmployee address is: %s", obj[i].empaddress);
        printf("\nEmployee age is: %d\n", obj[i].empage);
    }

    return 0;
}


