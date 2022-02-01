#include<stdio.h>

int main()
{
    int n;
    printf("Enter the the number of elements in array: ");
    scanf("%d", &n);

    int numbers[n];
    for(int i=0; i<n; i++)
    {
        scanf("\n%d", &numbers[i]);
    }

    int first_large = numbers[0];
    int second_Large = numbers[0];;
    printf("Numbers: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", numbers[i]);
        if(first_large < numbers[i])
        {
            second_Large = first_large;
            first_large = numbers[i];
        }

    }
    printf("\n%d is second maximum", second_Large);

    return 0;
}
