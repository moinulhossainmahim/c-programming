#include<stdio.h>

typedef struct Student {
  char name[20];
  int roll;
}student;

student takeInfo() {
  student s;
  printf("Enter student name: ");
  scanf(" %[^\n]%*c", s.name);
  printf("Enter roll: ");
  scanf("%d", &s.roll);
  return s;
}

void printStdInfo(student *ss) {
  printf("Name: %s\n", ss->name);
  printf("Roll: %d", ss->roll);
}

int main() {
  student s[2];
  student *sptr = s;
  int i;
  for(i=0; i<2; i++) {
    printf("Enter details of student %d\n", i);
    *(sptr+i) = takeInfo(); 
  }
  for(i=0; i<2; i++) {
    printf("Details of student %d", i);
    printStdInfo(sptr+i);
  }
  return 0;
}
