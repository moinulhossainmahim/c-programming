#include<stdio.h>

void main() {

    int i;
    int sum=0;
    int numbers[] = {2, 4, 5, 6, 8};

    int lengthOfNumbers = sizeof(numbers) / sizeof(numbers[0]);

    for(i = 0; i<lengthOfNumbers; i++) {
        sum += numbers[i];
    }
    printf("%d", sum);

}
