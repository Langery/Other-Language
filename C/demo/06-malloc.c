#include <stdio.h>
#include <stdlib.h>
// malloc
int main(){
  int *p;
  p=(int *)malloc(sizeof(int));
  *p=10;
  printf("*p is %d \n", *p);
  free(p);
  // 指针运算符 *
  // 取地址运算符 *
  int a, *q, *t;
  q = &a;
  t = q;
  printf("a is %d\n", a);
  printf("q is %d\n", *q);
  printf("t is %d\n", *t);
}