#include <stdio.h>
#include <string.h>
#include <math.h>

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

// int a=100;
// s() {
//   static int a=20;
//   a++;
//   printf("%d\n",a);
// }

// int main() {
//   int i;
//   for(i=1; i<=3; i++) {
//     a++;
//     printf("%d,",a);
//     s();
//   }
// }

// #define N 10;
// int main() {
//   int i,a[N];
//   for(i=N-1;i>=0;i--) {
//     scanf("%d",&a[i]);
//   }
//   for(i=0;i<N;i++) {
//     printf("%d\t",a[i]);
//     printf("\n");
//   }
// }

// int main() {
//   char score;
//   scanf("%c",&score);
//   switch(score) {
//     case 'A':
//       printf("A:90~100\n");
//       break;
//     case 'B':
//       printf("B:80~89\n");
//       break;
//     case 'C':
//       printf("C:7-79\n");
//       break;
//     case 'D':
//       printf("D:60~69\n");
//       break;
//     case 'E':
//       printf("E:0~59\0");
//       break;
//     default:
//       printf("输入错误\n");
//   }
// }

// int main() {
//   int num;long int sum=0L;
//   FILE *fp;
//   fp=fopen("num.dat","r");
//   do {
//     fscanf(fp,"%d",&num);
//     sum+=num;
//     printf("%5d",num);
//   } while(!feof(fp));
//   printf("\nsum=%ld\n",sum);
//   fclose(fp);
// }

// #define EPS 1E-6;
// int main() {
//   float x,y;

//   scanf("%f,%f",&x,&y);
//   printf("x+y=%.2f,x-y=%.2f,x*y=%.2f",x+y,x-y,x*y);
//   if(fabs(y) >= EPS) {
//     printf("x/y=%.2f\n",x/y);
//   }else {
//     printf("y=0 不能计算！ \n");
//   }
// }

// int main() {
//   float x,y;
//   scanf("%f",&x);
//   if(x<0) {
//     y = x;
//   }else if(x>=0 && x<10) {
//     y= sin(x) + cos(x);
//   }else {
//     y = exp(x);
//   }
//   printf("x=%f,y=%f\n",x,y);
// }

// int main (){
//   int i,j;
//   for(i=1; i<=9; i++) {
//     for(j=i; j<=10; j++) {
//       printf(" ");
//     }
//     for(j=1; j<=i; j++) {
//       printf("%d",j);
//     }
//     for(j=i-1; j>=1; j--) {
//       printf("%d",j);
//     }
//     printf("\n");
//   }
//   return 0;
// }

int main() {
  int x=2,y=2,z=0,a;
a=++x||++y&&z++;
printf("%d,%d,%d\n",x,y,z);
}