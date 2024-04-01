#include <stdio.h>
#include <string.h>
// main() {
//   int i;
//   for(i=1;i<3;i++) {
//     f(i);
//   }
// }
// void f(int j) {
//   static int A=100;
//   int k = 1;
//   ++k;
//   printf("%d\n",j+A+k);
//   A-=2;
// }


// long fun(int n) {
//   long s;
//   if(n<=2) {
//     s = 2;
//   }else {
//     s = n + fun(n-1);
//   }
//   printf("%d\t",s);
//   return s;
// }
// int main() {
//   fun(5);
//   printf("\n");
//   return 0;
// }



// struct prob {
//   char *name;
//   int age;
// };

// struct prob s[] = {"LiHua",18,"WangXin",25,"LiuGuo",21};
// #define N(a) (sizeof(s) / sizeof(s[0]))  // 48 / 16

// void f(struct prob A[],int n);
// int main() {
//   printf("Size of struct prob: %zu bytes\n", sizeof(struct prob)); // 16
//   f(s, N(s));  
//   return 0;
// }

// void f(struct prob A[],int n) {
//   int i;
//   for(i=0; i<n; i++) {
//     printf("%s:%d\n",A[i].name,A[i].age);
//   }
// }


// void LE(int *a,int b) {
//   int x = *a;
//   printf("%d\t%d\n",*a,b);
//   *a=b; // 25
//   b=x; 
// }

// int main() {
//   int x = 10,y = 25;
//   LE(&x,y);
//   printf("%d\t%d\n",x,y);
//   return 0;
// }


// int main() {
//   char c;
//   while((c=getchar()) != '\n') {
//     switch(c-'0') { // 进行数值类型转换
//       case 0:
//       case 1:
//         putchar(c+2);
//       case 2:
//         putchar(c+3);
//         break;
//       case 3:
//         putchar(c+4);
//       default:
//         putchar(c+1);
//         break;
//     }
//     printf("\n");
//   }
//   return 0;
// }


// int main() {
//   int n,a,b,c; // n、a、b 和c 分别为三位数自身及其个位、十位和百位
//   for(c=1; c<=9; c++) {
//     for(b=0; b<=9; b++) {
//       for(a=0; a<=9; a++) {
//         n=c*100+b*10+a;
//         if(a*a*a+b*b*b+c*c*c==n) {
//           printf("%d\n",n);
//         }
//       }
//     }
//   }
//   return 0;
// }

// int main() {
//   int i;
//   char *digit[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//   scanf("%d",&i);
//   printf("%d->",i);
//   if(i>=0 && i<=9) {
//     printf("%s\n",digit[i]);
//   }else {
//     printf("Input error!\n");
//   }
//   return 0;
// }

// int main() {
//   FILE *ma,*niu;
//   ma=fopen("ma.dat","r");
//   niu=fopen("niu.dat","w");
//   while(!feof(ma)) {
//     fputc(fgetc(ma),niu);
//   }
//   fclose(niu);
//   fclose(ma);
// }

// int main() {
//   float math,english,C,sum,aver;
//   scanf("%f,%f,%f",&math,&english,&C);
//   sum = math+english+C;
//   aver = sum/3;
//   printf("math=%.1f,english=%.1f,C=%.1f,sum=%.1f,aver=%.2f",math,english,C,sum,aver);
// }

// long fac(int n) {
//   long f=1;
//   int i;
//   for(i=1; i<=n; i++) {
//     f*=i;
//     return f;
//   }
// }

// long cmk(int m, int k) {
//   return fac(m) / (fac(k) *fac(m - k));
// }

// int main() {
//   int i,j,a[5][5];
//   for(i=0; i<5; i++) {
//     for(j=0; j<5; j++) {
//       if(i<j) {
//         a[i][j] = 0;
//       }else {
//         a[i][j] = i-j+1;
//       }
//     }
//   }
//   for(i=0; i<5; i++) {
//     for(j=0; j<5; j++) {
//       printf("%5d",a[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
