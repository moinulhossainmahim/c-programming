#include<stdio.h>
#include<string.h>

typedef struct User {
    char name[20];
    int age;
}user;

user getUserInfo(user u) {
    user u2;
    strcpy(u2.name, u.name);
    u2.age = u.age;
    return u2;
}

int main() {
    user u1;
    user u2;
    printf("Enter name: ");
    scanf(" %[^\n]%*c", u1.name);
    printf("Enter age: ");
    scanf("%d", &u1.age);
    u2 = getUserInfo(u1);
    printf("%s", u2.name);
    printf("%d", u2.age);
    return 0;
}

