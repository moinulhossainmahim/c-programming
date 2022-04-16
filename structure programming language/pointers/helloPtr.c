#include<stdio.h>

typedef struct Student {
    char name[25];
    int id;
    float percent;
}student;

void printInfo(student *s);

void main() {
    student s1;
    student *ptr = &s1;
    printf("Enter name, id and percent: ");
    scanf(" %[^\n]%*c", ptr->name);
    scanf("%d", &ptr->id);
    scanf("%f", &ptr->percent);
    printInfo(ptr);
}

void printInfo(student *s) {
    printf("%d\n", s->id);
    printf("%s\n", s->name);
    printf("%f\n", s->percent);
}


