#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int spiderMoveArr[4];
    float distance;

    srand(time(0));
    for(int i=0; i<4; i++)
    {
        spiderMoveArr[i] = rand() % 20;
        printf("%d\n", spiderMoveArr[i]);
    }

    int x = spiderMoveArr[1] - spiderMoveArr[0];
    int y = spiderMoveArr[2] - spiderMoveArr[3];
    distance = sqrt((x*x) + (y*y));

    printf("x = %d\ny = %d\n", x, y);
    printf("Distance from origin is: %.2f", distance);

    return 0;
}
