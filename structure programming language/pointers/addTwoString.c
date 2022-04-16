#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char str1[n];
  char str2[n];
  char *ptr1 = str1;
  char *ptr2 = str2;
  int i=0;
  while(*ptr1 != '\0') {
    i++;
  }
  int j=0;
  while(*ptr2 != '\0') {
    ptr1[i] = ptr2[j];
    i++;
    j++;
  }
  ptr1[i] = '\0';
  print("%s", str1);
  return 0;
}