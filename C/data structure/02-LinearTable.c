#include <stdio.h>
#include <stdlib.h>

typedef int ElemType; // 定义 ElemType
#define MaxSize 0
// #define status int
typedef struct
{
  /* data */
  ElemType data[MaxSize];
  int length;
}SqList;

void fun(){
  /*
    & 取地址符
    * 间接运算符
  */
  int a = 5;
  int *p = &a;
  printf("a is %d\n", a);
  printf("*p is %d\n", *p);
}

void add(int a, int b){
  int addnum = a+b;
  printf("addnum is %d\n", addnum);
}


int main(){
  SqList SqList;
  printf("SqList %lu\n", sizeof(SqList));
  fun();
  // add(1, 5);
}