#include<stdio.h>
int main() {
	int arr1[5];
	int arr2[5];
	int *arr1Ptr = arr1;
	int *arr2Ptr = arr2;
	for(int i=0; i<5; i++) {
		scanf("%d", arr1Ptr+i);
	}
	for(int i=0; i<5; i++) {
		arr2Ptr[i] = arr1Ptr[i];
		printf("%d\n", *(arr2Ptr+i));
	}
	return 0;
}
