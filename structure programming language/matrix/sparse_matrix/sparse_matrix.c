#include<stdio.h>

int main() {

    int rows;
    int cols;
    int sparse_counter = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];


    printf("Enter the matrix\n");
    for(int row=0; row<rows; row++)
    {
        for(int col=0; col<cols; col++)
        {
            scanf("%d", &matrix[row][col]);
            if(matrix[row][col] == 0)
            {
                sparse_counter++;
            }
        }
    }

    if(sparse_counter>(rows*cols)/2)
    {
        printf("This is sparse matrix");
    } else {
        printf("This matrix is not sparse\n");
        printf("There is %d numbers of zeros", sparse_counter);
    }


    return 0;
}
