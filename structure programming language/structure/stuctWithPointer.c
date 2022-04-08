#include<stdio.h>

typedef struct Student {
    char name[25];
    int id;
    float percent;
}student;

void printInfo(student *s);

void main() {
    student s1;
    printf("Enter name, id and percent: ");
    scanf(" %[^\n]%*c", s1.name);
    scanf("%d", &s1.id);
    scanf("%f", &s1.percent);
    printInfo(&s1);
}

void printInfo(student *s) {
    printf("%d\n", s->id);
    printf("%s\n", s->name);
    printf("%f\n", s->percent);
}
