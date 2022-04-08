#include<stdio.h>
#include<string.h>

int main() {
    FILE *fptr;
    int i=0,total=0;
    char line[20][100];
    fptr=fopen("hello.txt", "r");

    while(fgets(line[i], 100, fptr)) {
        line[i][strlen(line[i])-1] = '\0';
        i++;
    }
    total=i;
    for(i=0; i<total; i++) {
        printf("%s\n", line[i]);
    }
    fclose(fptr);
    return 0;
}

