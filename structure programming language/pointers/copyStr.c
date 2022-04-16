#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char str1[n];
  char str2[n];
  scanf(" %[^\n]%*c", str1);
  char *ptr1 = str1;
  char *ptr2 = str2;
  while( *ptr1 != '\0') {
    *ptr2 = *ptr1;
    ptr1++;
    ptr2++;
  }
  printf("%s", str2);
  return 0;
}
