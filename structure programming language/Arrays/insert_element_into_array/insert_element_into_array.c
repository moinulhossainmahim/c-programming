#include<stdio.h>

int main() {

    int n;
    printf("Enter the elements of the array: ");
    scanf("%d", &n);

    int numbers[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int index;
    int value;

    printf("Enter the index: ");
    scanf("%d", &index);
    printf("Enter the value: ");
    scanf("%d", &value);

    for(int i=n; i>=index; i--)
    {
        if(i==index){
            numbers[i] = value;
        }
    }

    printf("Elements of new array: ");
    for(int i = 0; i<n; i++)
    {
        printf("%d, ", numbers[i]);
    }
    return 0;
}
