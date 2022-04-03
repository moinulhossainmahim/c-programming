#include<stdio.h>

typedef struct Student {
    char name[20];
    int roll;
    int marks;
}student;

int main() {
    student s[5];
    int totalMarks = 0;
    float avg;

    int i;
    for(i=0; i<5; i++) {
        printf("Enter name, roll, marks for student %d ", i+1);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
        totalMarks += s[i].marks;
    }

    for(i=0; i<5; i++) {
        printf("Name of student %d is %s, roll is %d and marks he got is %d\n", i+1, s[i].name, s[i].roll, s[i].marks);
    }

    avg = totalMarks / 5;
    printf("Avg of all students marks is: %.2f\n", avg);

    return 0;
}
