#include<stdio.h>

void swap(int *x, int *y) {
	int temp=*x;
	*x=*y;
	*y=temp;
	printf("x = %d, y =  %d\n", *x, *y);
}

int main() {
	int num1, num2;
	scanf("%d%d",&num1, &num2);
	swap(&num1, &num2);
	printf("num1 = %d, num2 = %d\n", num1, num2);
	return 0;
}
