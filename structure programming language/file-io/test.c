#include<stdio.h>

int main() {
    FILE *fptr;
    int spaceCounter = 0;
    char str;
    char fname[20];
    int counter=0;
    scanf("%s", fname);
    fptr = fopen(fname, "r");
    str = fgetc(fptr);

    while(str != EOF) {
        if(str == '\n') {
            counter++;
        }
        if(str == ' ') {
            spaceCounter++;
        }
        str = fgetc(fptr);
    }
    fclose(fptr);
    printf("Total line in this file is %d\n", counter);
    printf("Total space is %d", spaceCounter);
    return 0;
}
