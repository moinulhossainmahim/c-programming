#include<stdio.h>

int main()
{

    int block;
    int row;
    int col;

    int A[2][3][3];

    for(block=0; block<2; block++)
    {
        printf("Enter Array %d\n", block+1);
        for(row=0; row<3; row++)
        {
            for(col=0; col<3; col++)
            {
                scanf("%d", &A[block][row][col]);
            }
        }
        printf("\n");
    }

    printf("All elements of Array A\n");

    for(block=0; block<2; block++)
    {
        for(row=0; row<3; row++)
        {
            for(col=0; col<3; col++)
            {
                printf("%d ", A[block][row][col]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}






