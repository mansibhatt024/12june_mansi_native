//wap to difference between  structure and union
#include <stdio.h>

struct stdata {
    int no;
    char name[50];
    char address[100];
    int age;
};

union stunion {
    int stno;
    char stname[10];
    char staddress[100];
    int stage;
};

int main() {
    struct stdata objstruct[4];
    union stunion objunion[4];
    int i;

    printf("Using Structure:\n");
    for (i = 0; i < 4; i++) {
        printf("Enter student no: ");
        scanf("%d", &objstruct[i].no);

        printf("Enter student name: ");
        scanf(" %[^\n]", objstruct[i].name);

        printf("Enter student address: ");
        scanf(" %[^\n]", objstruct[i].address);

        printf("Enter student age: ");
        scanf("%d", &objstruct[i].age);
    }

    printf("Student Info (Structure):\n");
    for (i = 0; i < 4; i++) {
        printf("\nStudent roll no: %d", objstruct[i].no);
        printf("\nStudent name: %s", objstruct[i].name);
        printf("\nStudent address: %s", objstruct[i].address);
        printf("\nStudent age: %d\n", objstruct[i].age);
    }

    printf("Using Union:\n");
    for (i = 0; i < 4; i++) {
        printf("Enter student no: ");
        scanf("%d", &objunion[i].stno);

        printf("Enter student name: ");
        scanf(" %[^\n]", objunion[i].stname);

        printf("Enter student address: ");
        scanf(" %[^\n]", objunion[i].staddress);

        printf("Enter student age: ");
        scanf("%d", &objunion[i].stage);
    }

    printf("Student Info (Union):\n");
    for (i = 0; i < 4; i++) {
        printf("\nStudent roll no: %d", objunion[i].stno);
        printf("\nStudent name: %s", objunion[i].stname);
        printf("\nStudent address: %s", objunion[i].staddress);
        printf("\nStudent age: %d\n", objunion[i].stage);
    }

    return 0;
}

