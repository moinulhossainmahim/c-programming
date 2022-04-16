#include<stdio.h>
 
int fibo(int n);

int main() {
  int n,m=0,i;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    printf("%d ", fibo(m));
    m++;
  }
  return 0;
}

int fibo(int n) {
  if(n==0 || n==1) {
    return n;
  } else {
    return (fibo(n-1) + fibo(n-2));
  }
}

// 5
// 0 1 fibo(2-1) + fibo(2-2)
// 0 1 1+0 = 1
// 0 1 1 fibo(3-1) + fibo(3-2)
// 0 1 1 fibo(2) + fibo(1)
// 0 1 1 fibo(1) + fibo(0) + 1
// 0 1 1 1+0+1 = 2
// 0 1 1 2



// Sum of digits of a number
/* int printSum(int n);

int main() {
  int n, result;
  scanf("%d", &n);
  result = printSum(n);
  printf("%d", result);
  return 0;
}

int printSum(int n) {
  int lastDigit = n%10;
  int remainNumber = n/10;
  if(remainNumber == 0) {
    return lastDigit;
  } else {
    return lastDigit + printSum(remainNumber);
  }
} */



// 210
// l = 0; r = 21 0+ps(21) 0+3
// l = 1; r = 2  1+ps(2) 1+2
// l = 2; r = 0  2+ps(0) 2+0


void reverseString();

int main() {
  printf("Enter a string: ");
  reverseString();
}

void reverseString() {
  char c;
  scanf("%c", &c);
  if(c != '\n') {
    reverseString();
    printf("%c", c);
  }
}
