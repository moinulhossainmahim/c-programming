#include<stdio.h>

int main() {

    int A[2][2];
    int B[2][2];
    int C[2][2];
    int row;
    int col;

    printf("Enter the elements for A\n");
    for(row=0; row<2; row++){
        for(col=0; col<2; col++) {
             scanf("%d", &A[row][col]);
        }
    }

    printf("Enter the elements for B\n");
    for(row=0; row<2; row++){
        for(col=0; col<2; col++) {
             scanf("%d", &B[row][col]);
        }
    }

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            C[i][j] = 0;
            for(int k=0; k<2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Multiplication of two matrices\n");
    for(row=0; row<2; row++)
    {
        for(col=0; col<2; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}











