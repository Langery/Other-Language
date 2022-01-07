#include <stdio.h>
int main(){
  double a = 1.0;
  printf("%f\n", a/3);
  printf("%20.15f\n", a/3);

  float b;
  b = 10000/3.0;
  printf("%f\n", b);
  printf("%-25.15f,%25.15f\n", b,b);

  printf("%e", 123.456);
  printf("%13.2e", 123.456);
  return 0;
}