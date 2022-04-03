#include<stdio.h>

// using length of string
// int main() {
//   char name[6] = {'m','a','h','i','m'};
//   int i=0;
//   int count = 0;
//   while(i<6) {
//     if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u') {
//       count++;
//     }
//     i++;
//   }
//   printf("%d\n", count);
//   return 0;
// }

// using null character of string
int main() {
  char userName[] = "moinulhossain";
  int count = 0;
  int i = 0;
  while (userName[i] != '\0')
  {
    if(userName[i] == 'a' || userName[i] == 'e' || userName[i] == 'i' || userName[i] == 'o' || userName[i] == 'u') {
      count++;
    }
    i++;
  }
  printf("%d\n", count);
  return 0;
}