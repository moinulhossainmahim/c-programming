#include<stdio.h>

int main() {
    int i;
    int j;
    int n;

    printf("Enter a number for find Multiplication table: ");
    scanf("%d", &n);

    for(i = 1; i<=10; i++) {
        printf("%d * %d = %d\n", i, n, i*n);
    }

    return 0;
}
