#include<stdio.h>


int main()
{

    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d elements for the array", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int max = numbers[0];
    int min = numbers[0];
    for(int i=0; i<n; i++)
    {
        if(max < numbers[i])
        {
            max = numbers[i];
        }
        if(min > numbers[i])
        {
            min = numbers[i];
        }
    }
    printf("Maximum value is: %d\n", max);
    printf("Minimum value is: %d", min);

    return 0;
}




















