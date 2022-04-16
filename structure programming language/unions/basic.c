#include<stdio.h>

typedef union Data {
  int id;
  float somenumber;
  char str[20];
}data;

int main() {
  data data1;
  data1.id = 10;
  data *data2 = &data1;
  printf("%d %f %s", data2->id, data2->somenumber, data2->str);
  return 0;
}
