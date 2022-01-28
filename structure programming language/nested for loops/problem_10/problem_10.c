#include<stdio.h>

int main()
{

    int i;
    int j;
    int rows;
    int n = 1;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%2==0)
            {
                printf("%d ", n);
            }
            else
            {
                printf("%c ", ch);

            }
        }
        printf("\n");
        if(i%2==0) ++n;
        else ++ch;
    }
    return 0;
}
