#include <stdio.h>

int x;
int y;
int addtwonum (){
  extern int x;
  extern int y;
  x = 1;
  y = 2;
  return x+y;
}

int main(){
  int result;
  result = addtwonum();
  // printf("result",result);
  /*
    %d 整型输出
    %o 八进制输出整数
    %c 输出一个字符
    %s 输出一个字符串
    %f 输出实数，以小数点形式输出
    %e 以指数形式输出实数
  */
  printf("result 为: %d",result);
  return 0;
}