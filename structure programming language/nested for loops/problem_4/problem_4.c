#include<stdio.h>

int main()
{

    int i;
    int j;
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=0; i<rows; i++)
    {
        for(j=0; j<rows; j++) {
            printf("%c", 'a'+i);
        }
        printf("\n");
    }

}
