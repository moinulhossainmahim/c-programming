#include<stdio.h>

int main()
{

    int i;
    int j;
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows; j++)
        {
            if(j<=rows-i)
            {
                printf("- ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
