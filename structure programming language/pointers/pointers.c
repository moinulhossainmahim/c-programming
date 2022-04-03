
#include<stdio.h>

int main() {
	int x = 10,  y = 12;
	int *ptr1, *ptr2;
	ptr1=&x, ptr2 = &y;
	printf("%d %d\n", *ptr1, *ptr2);
	return 0;
}
