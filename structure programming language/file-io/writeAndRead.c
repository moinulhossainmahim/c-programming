#include<stdio.h>

int main() {
    FILE *fptr;
    int n,i;
    char str[100];
    char str1;
    fptr=fopen("hello.txt", "w");
    printf("Input number of lines: ");
    scanf("%d", &n);
    for(i=0; i<n+1; i++) {
        fgets(str, sizeof str, stdin);
        fputs(str, fptr);
    }
    fclose(fptr);
    fptr=fopen("hello.txt", "r");
    str1 = fgetc(fptr);
    while(str1 != EOF) {
        printf("%c", str1);
        str1=fgetc(fptr);
    }
    return 0;
}
