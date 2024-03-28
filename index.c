#include <stdio.h>
#include "string.h"
int f(int a){
  int b=4;
	static int c=4;
	b++; // 5
	c++; // 5
	return(a+b+c); // 14  15  16
}
int main() {
  int a=4,i;
  for(i=0;i<3;i++) {
    printf("%4d",f(a));
  }

  return 0;
}

