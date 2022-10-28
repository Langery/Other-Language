#include <stdio.h>
int main () {
  // char a = 'B', b = 'O', c = 'Y';
  int a = 66, b = 79, c = 89;
  // putchar
  putchar(a);
  putchar(b);
  putchar(c);
  putchar('\n');

  // getchar 用户主动输入信息，然后返回用户输入信息
  char d,e,f;
  d = getchar();
  e = getchar();
  f = getchar();
  putchar(d);
  putchar(e);
  putchar(f);
  putchar('\n');

  char c1,c2;
  c1 = getchar(); // c1必须是大写字母
  c2 = c1 + 32;
  printf("大写字母: %c\n小写字母: %c\n", c1, c2);

  return 0;
}