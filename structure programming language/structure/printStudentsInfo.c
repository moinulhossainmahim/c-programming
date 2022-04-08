#include<stdio.h>

typedef struct Student {
    char firstName[20];
    char lastName[20];
    int id;
    int score;
}student;

int main() {
    student students[3];
    int i=0;
    for(i=0; i<3; i++) {
        printf("Enter info of student %d\n", i+1);
        printf("Enter First Name: ");
        scanf("%s", students[i].firstName);

        printf("Enter Last Name: ");
        scanf("%s", students[i].lastName);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Score: ");
        scanf("%d", &students[i].score);
    }
    for(i=0; i<3; i++) {
        printf("%s", students[i].firstName);
        printf("%s\n", students[i].lastName);
        printf("%d\n", students[i].id);
        printf("%d\n", students[i].score);
    }

    return 0;
}
