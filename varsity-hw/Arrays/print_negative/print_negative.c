#include<stdio.h>

void main()
{

    int i;
    int numbers[] = {1, 3, -4, 8, -2, 5, -5, -6, -1, -3};

    int length = sizeof(numbers) / sizeof(numbers[0]);

    for(i = 0; i<length; i++)
    {

        if(numbers[i]<0)
        {

            printf("%d\n", numbers[i]);

        }

    }


}
