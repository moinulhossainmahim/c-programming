#include<stdio.h>

int main()
{
    int n,i,j;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j <= n-i) printf("%d",1);
            else printf("%d",i);
        }

        printf("\n");
    }
    return 0;
}
