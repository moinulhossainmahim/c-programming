#include <stdio.h>
#include<string.h>

struct student
{
    int id;
    char name [20];
    float cgpa;
};

void func(struct student details);

int main()
{
   struct student details;
   
   details.id=1;
   strcpy(details.name,"hello");
   details.cgpa=3.80;
   
   func(details);
    return 0;
}
void func(struct student details)
{
    printf("Id is %d\n",details.id);
    printf("Name is %s\n",details.name);
    printf("C.G.P.A is:%.2f\n",details.cgpa);
}
