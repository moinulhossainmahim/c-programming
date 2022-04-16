#include<stdio.h>

typedef struct Student {
  char name[20];
  char gender[10];
  int age;
}student;

void printStudentInfo(student *s) {
  int i;
  for(i=0; i<2; i++) {
    printf("Student %d Info: \n", i);
    printf("%s\n", (s+i)->name);
    printf("%s\n", (s+i)->gender);
    printf("%d\n", (s+i)->age);
  }
}

int main() {
  student s[2];
  student *ptr = s;
  int i;
  for(i=0; i<2; i++) {
    scanf(" %[^\n]%*c", (ptr+i)->name);
    scanf(" %[^\n]%*c", (ptr+i)->gender);
    scanf("%d", &(ptr+i)->age);
  }
  printStudentInfo(ptr);
  return 0;
}
