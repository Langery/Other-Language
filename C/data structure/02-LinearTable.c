#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  /* data */
  int elem;
  struct node *next;
}DataNode;

int main(){
  DataNode data;
  printf("DataNode is %d", data);
}

