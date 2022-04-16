#include<stdio.h>

typedef struct Student {
  char name[10];
  int age;
}student;

void printInfo(student *s) {
  int i;
  for(i=0; i<2; i++) {
    printf("Name: %s\n", (s+i)->name);
    printf("Age: %d\n", (s+i)->age);
  }
}

void main() {
  student s[2];
  student *ptr = s;
  int i;
  for(i=0; i<2; i++) {
    scanf(" %[^\n]%*c", (ptr+i)->name);
    scanf("%d", &(ptr+i)->age);
  }
  printInfo(ptr);
}
