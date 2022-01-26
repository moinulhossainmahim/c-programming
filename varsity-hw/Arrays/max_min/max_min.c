#include<stdio.h>


int main() {

    int i;
    int numbers[] = {1, 4, 3, 2, 12, 3, 0, 8};
    int temp = numbers[0];

    int length = sizeof(numbers) / sizeof(numbers[0]);

    for(i=1; i<length; i++) {

            if (numbers[i] > temp) {
                temp = numbers[i];
            }
    }
    printf("%d is large", temp);

    return 0;
}
