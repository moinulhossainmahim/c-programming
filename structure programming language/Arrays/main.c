#include<stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    int length = sizeof(arr) / sizeof(arr[0]);
    for(i=0; i<length; i++)
    {
        printf("%d\n", arr[i]);
    }
}
