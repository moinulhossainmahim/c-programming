#include<stdio.h>

typedef struct Student {
    int id;
    char name[100];
    float percent;
}student;

void printInfo(student moinul) {
    printf("%d\n", moinul.id);
    printf("%s\n", moinul.name);
    printf("%f\n", moinul.percent);
}

int main() {
    student moinul;
    printf("Enter your id: ");
    scanf("%d", &moinul.id);
    printf("Enter your name: ");
    scanf("%s", moinul.name);
    printf("Enter your marks percent: ");
    scanf("%f", &moinul.percent);
    printInfo(moinul);
    return 0;
}
