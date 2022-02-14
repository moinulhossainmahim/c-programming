#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int speedArr[100];
    int count = 0;

    srand(time(0));
    for(int i=0; i<100; i++)
    {
        speedArr[i] = rand() % 70;
        if(speedArr[i] > 60)
        {
            count++;
        }
    }

    if(count>30){
        printf("Police informed less cases");
    } else if(count<30) {
        printf("Police informed extra cases");
    } else if(count==30) {
        printf("Police informed exact cases");
    } else {
        printf("Something went wrong");
    }

    printf("\nCount %d", count);

    return 0;
}
