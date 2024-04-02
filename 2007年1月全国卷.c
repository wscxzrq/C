#include <stdio.h>
#include <string.h>

// int main () {
//   int x = 15;
//   while(x<20) {
//     x++;
//     if(x/3!=0) {
//       x++;
//       break;
//     }else {
//       continue;
//     }
//   }
//   printf("%d\n",x);
// }

// fun(int a[], int i, int j) {
//   int t;
//   if(i<j) {
//     t = a[i]; 
//     a[i] = a[j]; 
//     a[j] = t;
//     i++; 
//     j--; 
//     fun(a,i,j);
//   }
// }

// int main() {
//   int x[] = {2,4,6},i;
//   fun(x,0,2);
//   for(i=0; i<3; i++) {
//     printf("%2d",x[i]);
//   }
//   printf("\n");
// }

// int main() {
//   int a,b[10],c,i=0;
//   printf("输入一个整数\n");
//   scanf("%d",&a);

//   while(a!=0) {
//     c=a%2; 
//     a=a/2; 
//     b[i]=c; 
//     i++; 
//   }

//   for(;i>0;i--) {
//     printf("%d",b[i-1]); 
//   }
// }

// int main () {
//   int a,b,i;
//   a=b=0;
//   for(i=0;i<=10;i+=2) {
//     a += i;
//     b += i+1;
//   }
//   printf("a=%d\n",a);
//   printf("b=%d\n",b-11);
// }

int a=100;
s() {
  static int a=20;
  a++;
  printf("%d\n",a);
}

int main() {
  int i;
  for(i=1; i<=3; i++) {
    a++;
    printf("%d,",a);
    s();
  }
}