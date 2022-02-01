#include<stdio.h>

int main()
{

    int n;

    printf("Enter the number of elements in Array: ");
    scanf("%d", &n);
    int numbers[n];

    printf("Enter the array elements\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Reversed Array: ");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}

