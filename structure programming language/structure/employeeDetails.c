#include<stdio.h>

typedef struct dateOfBirth{
        int dd;
        int mm;
        int yyy;
}DOB;

typedef struct Employee{
    char name[20];
    int id;
    DOB dob;
}employee;

int main() {
    employee e1;
    printf("Enter e1 name: ");
    scanf("%s", e1.name);
    printf("Enter id ");
    scanf("%d", &e1.id);
    printf("Enter dob in DD MM YYY format ");
    scanf("%d%d%d", &e1.dob.dd,&e1.dob.mm,&e1.dob.yyy);
    printf("\n Name: %s\n id: %d\n DateOfBirth: %02d - %02d - %02d", e1.name, e1.id, e1.dob.dd, e1.dob.mm, e1.dob.yyy);
    return 0;
}
