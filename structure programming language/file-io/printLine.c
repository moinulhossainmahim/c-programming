#include<stdio.h>

int main() {
    FILE *fptr;
    int spaceCounter = 0;
    char line[100];
    int counter=0;
    char c;
    fptr = fopen("hello.txt", "r");
    if(fptr == NULL) {
        printf("There is no hello.txt file exists");
    }
    for(c=fgetc(fptr); c!=EOF; c=fgetc(fptr)) {
        if(c == '\n') {
            counter++;
        }
        if(c == ' ') {
            spaceCounter++;
        }
    }
    fclose(fptr);
    printf("Total line in this file is %d\n", counter);
    printf("Total space is %d", spaceCounter);
    return 0;
}
