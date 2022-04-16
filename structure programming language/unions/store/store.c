#include<stdio.h>

typedef struct Book {
  char *title;
  char *author;
  int numOfPages;
}book;

typedef struct Shirt {
  int color;
  int size;
  char *design;
}shirt;

typedef union Item {
  book b;
  shirt s;
}item;

typedef struct Store {
  double price;
  item i;
}store;


int main() {
  store s1;
  store *ptr = &s1;
  ptr->i.b.author = "Moinul Hossain";
  ptr->i.b.numOfPages = 169;
  ptr->i.b.title = "The Alchemist";
  ptr->price = 250;
  printf("%s\n", ptr->i.b.author);
  return 0;
}
