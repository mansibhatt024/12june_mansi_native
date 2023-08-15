#include <stdio.h>

union stdata {
    int stno;
    char stname[10];
    int stage;
};

int main() {
    union stdata obj[4];
    int i;

    for (i = 0; i < 4; i++) {
        printf("Enter student no: ");
        scanf("%d", &obj[i].stno);

        printf("Enter student name: ");
        scanf("%s", obj[i].stname);

        printf("Enter student age: ");
        scanf("%d", &obj[i].stage);
    }

    for (i = 0; i < 4; i++) {
        printf("\nStudent roll no: %d", obj[i].stno);
        printf("\nStudent name: %s", obj[i].stname);
        printf("\nStudent age: %d\n", obj[i].stage);
    }

    return 0;
}

