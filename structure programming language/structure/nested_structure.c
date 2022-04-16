#include <stdio.h>

typedef struct DateOfBirth {
    int dd;
    int mm;
    int yy;
}dateofbirth;

typedef struct Student{
    char name[30];
    int rollNo;
    dateofbirth dateOfBirth;
}student;

int main()
{
    student std;
    printf("Enter name: ");
    scanf("%s", std.name);
    printf("Enter roll number: ");
    scanf("%d",&std.rollNo);
    printf("Enter Date of Birth [DD MM YYYY] format: ");
    scanf("%d%d%d",&std.dateOfBirth.dd,&std.dateOfBirth.mm,&std.dateOfBirth.yy);
    printf("\nName : %s \nRollNo : %d \nDate of birth : %d - %d - %d\n",std.name,std.rollNo,std.dateOfBirth.dd,std.dateOfBirth.mm,std.dateOfBirth.yy);
    return 0;
}
