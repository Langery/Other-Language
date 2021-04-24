#include <stdio.h>
#include <stdlib.h>
// malloc
int main(){
  int *p;
  p=(int *)malloc(sizeof(int));
  *p=10;
  printf("*p is %d \n", *p);
  free(p);
}