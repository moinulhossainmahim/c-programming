#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    char str;
    str=fgetc(fptr);
    while(str != EOF) {
        printf("%c", str);
        str=fgetc(fptr);
    }
    return 0;
}
