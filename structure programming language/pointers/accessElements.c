#include<stdio.h>

int main() {
  int n;
  printf("Enter Array Length: ");
  scanf("%d", &n);
  int arr[n];
  int *arrayPtr = arr;
  int i;
  for(i=0; i<n; i++) {
    scanf("%d", arrayPtr+i);
  }
  for(i=0; i<n; i++) {
    printf("%d\n", *(arrayPtr+i));
  }
  return 0;
}
