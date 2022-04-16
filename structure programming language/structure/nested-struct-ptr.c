/* #include<stdio.h>

typedef struct DateOfBirth {
  int dd;
  int mm;
  int yy;
}dateofbirth;

typedef struct Student {
  char name[30];
  int roll;
  dateofbirth date;
}student;

void printStudentInfo(student *s) {
  int i;
  for(i=0; i<2; i++) {
    printf("Name: %s\n", (s+i)->name);
    printf("Roll: %d\n", (s+i)->roll);
    printf("Date Of Birth: %02d-%02d-%02d\n", (s+i)->date.dd, (s+i)->date.mm, (s+i)->date.yy);

  }

}

int main() {
  student s[2];
  student *ptr = s;
  int i;
  for(i=0; i<2; i++) {
    scanf(" %[^\n]%*c", (ptr+i)->name);
    scanf("%d", &(ptr+i)->roll);
    scanf("%d%d%d", &(ptr+i)->date.dd, &(ptr+i)->date.mm, &(ptr+i)->date.yy);
  }
  printStudentInfo(ptr);
  return 0;
}
 */



#include<stdio.h>

typedef struct DateOfBirth {
  int dd;
  int mm;
  int yy;
}dateofbirth;

typedef struct Student {
  char name[30];
  int roll;
  dateofbirth date;
}student;

void printStudentInfo(student *s) {
    printf("Name: %s\n", s->name);
    printf("Roll: %d\n", s->roll);
    printf("Date Of Birth: %02d-%02d-%02d\n", s->date.dd, s->date.mm, s->date.yy);
}

int main() {
  student s;
  student *ptr = &s;
  int i;
  scanf(" %[^\n]%*c", ptr->name);
  scanf("%d", &ptr->roll);
  scanf("%d%d%d", &ptr->date.dd, &ptr->date.mm, &ptr->date.yy);
  printStudentInfo(ptr);
  return 0;
}
