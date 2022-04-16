#include<stdio.h>

int main() {
  int size, i;
  scanf("%d", &size);
  int src_arr[size];
  int dest_arr[size];
  int *src_ptr = src_arr;
  int *dest_ptr = dest_arr;
  int *end_ptr;
  for(i=0; i<size; i++) {
    printf("Enter %d element: ", i);
    scanf("%d", (src_ptr+i));
  }
  end_ptr = &src_arr[size-1];
  while(src_ptr <= end_ptr) {
    *dest_ptr = *src_ptr;
    dest_ptr++;
    src_ptr++;
  }
  for(i=0; i<size; i++) {
    printf("%d", dest_arr[i]);
  }
  return 0;
}
