#include<stdio.h>

int main() {

    int i;
    int j;
    int n;
    char ch = 'A';

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {

        for(j=1; j<=n; j++) {

            if(i==1 || j==1 || i==n || j==n) {
                printf("* ");
            } else {
                printf("%c ", ch++);
            }
            if(ch > 'Z') {
                ch = 'A';
            }
        }
        printf("\n");

    }

}
