#include<stdio.h>

void main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("This is zero");
    } else if (n >= 1) {
        printf("It's a positive number");
    } else if (n < 1) {
        printf("It's a negative number");
    } else {
        printf("Invalid Input");
    }
}
