#include<stdio.h>

int main() {
    char ch[10];
    scanf("%c", ch);
    switch(ch) {
        case "Dhandmondi":
            printf("22");
            break;
        case "Mohakhali":
            printf("5");
            break;
        default:
            printf("invalid");
    }
    return 0;
}
