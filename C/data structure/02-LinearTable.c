#include <stdio.h>
#include <stdlib.h>

typedef int ElemType; // 定义 ElemType
#define MaxSize 0
typedef struct
{
  /* data */
  ElemType data[MaxSize];
  int length;
}SqList;

void fun(){
  int a = 5;
  int *p = &a;
  printf("a is %d\n", a);
  printf("&a is %d\n", &a);
  printf("*p is %d\n", *p);
}

void add(int a, int b){
  int addnum = a+b;
  printf("addnum is %d\n", addnum);
}

int main(){
  SqList SqList;
  fun();
  add(1, 5);
  printf("SqList %lu", sizeof(SqList));
}

