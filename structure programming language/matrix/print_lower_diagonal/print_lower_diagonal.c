#include<stdio.h>

int main() {

    int A[3][3];
    int row;
    int col;

    printf("Enter the value of A\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    int small_diagonal=A[0][0];
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(row==col)
            {
                if(A[row][col] < small_diagonal)
                {
                    small_diagonal = A[row][col];
                }
            }
        }
    }

    printf("Small diagnoal is: %d", small_diagonal);

}
