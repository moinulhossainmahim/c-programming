#include<stdio.h>

int main()
{
    int A[3][3];
    int row;
    int col;
    int transposeOfA[3][3];

    printf("Enter the array elements\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            transposeOfA[row][col] = A[col][row];
        }
    }

    printf("Transpose of A is\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", transposeOfA[row][col]);
        }
        printf("\n");
    }

    return 0;
}






