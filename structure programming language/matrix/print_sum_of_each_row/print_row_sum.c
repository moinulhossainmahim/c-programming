#include<stdio.h>

int main() {

    int A[3][3];


    printf("Enter the elements of A\n");

    for(int row = 0; row<3; row++)
    {
        for(int col = 0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for(int row=0; row<3; row++)
    {
        int sum = 0;
        for(int col=0; col<3; col++)
        {
            sum += A[row][col];
        }
        printf("Sum of row %d: %d\n", row+1, sum);
    }

    return 0;

}
