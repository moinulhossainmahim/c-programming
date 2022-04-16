#include<stdio.h>

int * takeInput(int n) {
  int arr[n];
  int *arrptr = arr;
  int i;
  for(i=0; i<n; i++) {
    scanf("%d", (arrptr+i));
  }
  return arrptr;
}

int main() {
  int n, i;
  scanf("%d", &n);
  int *arrptr;
  arrptr = takeInput(n);
  for(i=0; i<n; i++) {
    printf("%d", *(arrptr+i));
  }
  return 0;
}
