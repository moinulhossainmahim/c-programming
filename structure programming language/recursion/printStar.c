#include<stdio.h>

void fun1(int n);

int main() {
	int n;
	scanf("%d", &n);
	fun1(n);
	printf("\n");
	return 0;
}

void fun1(int n) {
	int i=0;
	if(n>1) fun1(n-1);
	for(i = 0; i<n; i++) {
	   printf(" * ");
	}
}
