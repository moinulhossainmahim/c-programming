#include<stdio.h>

int main()
{

    int i;
    int j;
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {

        for(j=i; j>=1; j--)
        {

            if(j%2==0)
            {
                printf("$ ");
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
