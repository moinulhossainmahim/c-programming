#include<stdio.h>
void odd(int n);
void even(int n);

void even(int n) {
	if(n<=10) {
	   printf("%d ", n-1);
	   n++;
	   odd(n);
	}
	return;
}

void odd(int n){
	if(n <= 10) {
	   printf("%d ", n+1);
	   n++;
	   even(n);
	}
	return;
}

int main() {
	int n = 1;
	odd(n);
	return 0;
}
