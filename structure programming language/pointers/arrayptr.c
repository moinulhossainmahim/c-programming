#include<stdio.h>

int main() {
	int arr[10];
	int *ptr = arr;
	for(int i=0; i<10; i++) {
		scanf("%d", ptr+i);
	}
	for(int i=0; i<10; i++) {
	printf("%d\n", *(ptr+i));
	}
	return 0;
}
