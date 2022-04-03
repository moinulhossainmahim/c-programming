#include<stdio.h>

int sumDigits(int n) {
	static int sum = 0;
	if(n>0) {
	 sum += (n%10);
	 sumDigits(n/10);
	} else {
	  return sum;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int result = sumDigits(n);
	printf("%d\n", result);
	return 0;
}
