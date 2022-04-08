#include<stdio.h>

int main() {
    FILE *fptr;
    char fname[20];
    scanf("%s", fname);
    fptr = fopen(fname, "w");
    if(fptr == NULL) {
        printf("File failed to open");
    } else {
        fputs("I love cheese my buddy \n", fptr);
        fputs("because it's very tasty \n", fptr);
        fputs("I just loved it. \n", fptr);
    }
    fclose(fptr);
    return 0;
}
