#include<stdio.h>
#include<stdbool.h>

int main()
{

    int A[3][3];
    int B[3][3];
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

    bool isEqual=true;
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(A[row][col] != B[row][col]){
                isEqual = false;
            }
        }
    }
    if(isEqual) {
        printf("These two matrices are identical");
    } else {
        printf("These two matrices are not identical");
    }
    return 0;
}











