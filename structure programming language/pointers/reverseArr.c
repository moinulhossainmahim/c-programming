#include<stdio.h>

int main() {
  int n, temp;
  printf("Enter size of Array: ");
  scanf("%d", &n);
  int arr[n];
  int *arrPtr = arr;
  int i, j;

  for(i=0; i<n; i++) {
    scanf("%d", arrPtr+i);
  }

  for(i=0,j=n-1; i<j; i++, j--) {
    temp = *(arrPtr+i);
    *(arrPtr+i) = *(arrPtr+j);
    *(arrPtr+j) = temp;
  }

  for(i=0; i<n; i++) {
    printf("%d\n", arrPtr[i]);
  }
  return 0;
}
