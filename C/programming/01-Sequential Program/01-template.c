/**
 * @file template.c
 * @author langery
 * @version 0.1
 * @date 2022-01-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * 将华氏法转为摄氏法
 * 公式： c = 5/9(f - 32)
 * 
 */
#include <stdio.h>
int main() {
  float f,c;
  f = 64.0;
  c = (5.0/9)*(f-32);
  printf("f = %f \nc = %f \n", f, c);
  return 0;
}