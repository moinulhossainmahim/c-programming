#include<stdio.h>

int main() {
  int n1, n2;
  scanf("%d%d", &n1, &n2);
  int *ptr1 = &n1;
  int *ptr2 = &n2;
  int sum=0;
  sum = *ptr1 + *ptr2;
  printf("sum - %d", sum);
  return 0;
}