#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int d;
  struct node *next;
};

void _print(struct node *);
struct node * _insert(struct node *, int);
struct node * _free(struct node *);

void _print(struct node *p) {
  while (p) {
    printf("%d>", p -> d);
    p = p -> next;
  }
  printf("NULL\n");
}

struct node * _insert(struct node *p, int d) {
  struct node* n = (struct node*)malloc(sizeof(struct node));
  n -> d = d;
  n -> next = p;
  return n;
}

int main() {
  //test
  struct node *test = NULL;
  int i;
  for (i = 0; i < 3; i++) {
    test = _insert(test, 3-i);
  }
  _print(test);
  return 0;
}
