
#include<stdio.h>

typedef struct Student {
    char firstName[15];
    char lastName[15];
    int id;
    int score;
}student;

student getDetails();
void printDetails(student *ss);

int main() {
    student studentsArr[3];
    int i;
    for(i=0; i<2; i++) {
        printf("Enter details of student %d\n", i+1);
        studentsArr[i] = getDetails();
    }
    for(i=0; i<2; i++) {
        printf("Details of student %d\n", i+1);
        printDetails(&studentsArr[i]);
    }
    return 0;
}

student getDetails() {
    student ss;
    printf("Enter your firstName: ");
    scanf("%s", ss.firstName);

    printf("Enter your lastName: ");
    scanf("%s", ss.lastName);

    printf("Enter your ID: ");
    scanf("%d", &ss.id);

    printf("Enter your ID: ");
    scanf("%d", &ss.score);
    return ss;
}

void printDetails(student *ss) {
    printf("FirstName: %s\n", ss->firstName);

    printf("SecondName: %s\n", ss->lastName);

    printf("ID: %d\n", ss->id);

    printf("Score: %d\n", ss->score);
}
