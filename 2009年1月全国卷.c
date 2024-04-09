#include <stdio.h>

int main() {
  int x=1,a=0,b=0;
  switch(x) {
    case 0:
      a++;
      break;
    case 1:
      b++;
    case 2:
      a++;
      b++;
      break;
    case 3:
      a++;
      b++;
  }
  printf("a=%d,b=%d\n",a,b);
}