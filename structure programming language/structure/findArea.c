#include<stdio.h>

typedef struct Point {
    int x;
    int y;
}point;

typedef struct Rectangles {
    point upper_left;
    point lower_right;
}rectangles;

int calculateArea(rectangles r) {
    int length, breadth;
    length = r.lower_right.x - r.upper_left.x;
    breadth = r.upper_left.y - r.lower_right.y;

    return length*breadth;
}

int main() {
    rectangles r;
    printf("Enter coordinates of Upper Left: ");
    scanf("%d%d", &r.upper_left.x, &r.upper_left.y);

    printf("Enter coordinates of Lower Right: ");
    scanf("%d%d", &r.lower_right.x, &r.lower_right.y);

    int area = calculateArea(r);
    printf("Area of rectangle is: %d", area);
    return 0;
}
