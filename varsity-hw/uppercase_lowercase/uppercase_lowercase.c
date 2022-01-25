#include<stdio.h>

void main() {

    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else {
        printf("Invalid input");
    }

}
