#include<stdio.h>

int main() {

    int A[3][3];
    int B[3][3];
    int C[3][3];
    int row;
    int col;

    printf("Enter the elements for A\n");
    for(row=0; row<3; row++){
        for(col=0; col<3; col++) {
             scanf("%d", &A[row][col]);
        }
    }

    printf("Enter the elements for B\n");
    for(row=0; row<3; row++){
        for(col=0; col<3; col++) {
             scanf("%d", &B[row][col]);
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            C[i][j] = 0;
            for(int k=0; k<3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Multiplication of two matrices\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}











