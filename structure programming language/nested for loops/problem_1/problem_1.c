#include<stdio.h>

int main()
{

    int i;
    int n;
    int j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {

        for(j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");

    }

}
