#include <stdio.h>
int main() {
  char ch[] = {"abc\0def"},*p=ch;
  printf("%c",*p+4);

  return 0;
}
