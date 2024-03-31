#include <stdio.h>
#include "string.h"
struct prob {
  char *name;
  int age;
};

struct prob s[] = {"LiHua",18,"WangXin",25,"LiuGuo",21};
#define N(a) (sizeof(s) / sizeof(s[0]))

void f(struct prob A[],int n);
int main() {

}

void f(struct prob A[],int n) {
  int i;
  for(i=0; i<n; i++) {
    printf("%s:%d\n",A[i].name,A[i].age);
  }
}

