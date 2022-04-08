#include<stdio.h>

typedef struct User {
    char name[20];
    int age;
}user;

user getUserInfo() {
    user u2;
    printf("Enter name: ");
    scanf(" %[^\n]%*c", u2.name);
    printf("Enter age: ");
    scanf("%d", &u2.age);
    return u2;
}

int main() {
    user u1;
    u1 = getUserInfo();
    printf("%s\n", u1.name);
    printf("%d\n", u1.age);
    return 0;
}
