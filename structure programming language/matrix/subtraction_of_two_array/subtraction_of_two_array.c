#include<stdio.h>

int main() {

    int A[3][3];
    int B[3][3];
    int C[3][3];

    int row, col;

    printf("Enter the elements of A\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("Enter the elements of B\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            C[row][col] = A[row][col] - B[row][col];
        }
    }

    for(row=0; row<3; row++) {
        for(col=0; col<3; col++)
        {
            printf("%d - %d = %d ", A[row][col], B[row][col], C[row][col]);
        }
        printf("\n");

    }

    return 0;
}
