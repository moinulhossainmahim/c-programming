#include<stdio.h>
#include<string.h>

int main() {
  int strLength;
  char userName[strLength];
  printf("Please enter the username: ");
  scanf("%[^\n]%*s", userName);
  int i=0;
  while(userName[i] != '\0') {
    strLength++;
    i++;
  }

  int j=0;
  int count = 0;
  while(userName[i] != '\0') {
    if(userName[i] != 'a' && userName[i] != 'e' && userName[i] != 'i' && userName[i] != 'o' && userName[i] != 'u'){
      count++;
    }
    i++;
  }
  printf("Total number of consonant is: %d\n", count);
  // printf("%s\n", userName);
    // int size;
    // char arr[size];
    // scanf("%[^\n]%*c",arr);
    // size = strlen(arr);
    // printf("size = %d\n", size);
  return 0;
}