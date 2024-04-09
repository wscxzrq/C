#include <stdio.h>
#include <string.h>
#include <math.h>
// int main() {
//   int i=11,j;
//   j=i%3;
//   switch(j) {
//     case 1:
//     case 2:
//       printf("%d\n",j);
//       break;
//     default:
//       printf("%d\n",i);
//   }
// }


// int fx(int n) {
//   int s;
//   if(n==0) {
//     s=0;
//   }else {
//     s=n+fx(n-2);
//   }
//   return s;
// }

// int main () {
//   printf("%d\n",fx(8));
// }


// int main() {
//   char *pa,a[20]="Beijing2008";

//   for(pa=a+7;*pa!='\0';pa++) {
//     putchar(*pa);
//   }
//   putchar("\n");
//   printf("%s",pa);
// }


// #define N 6
// int main() {
//   int a[N]={2,5,-6,4,-9,10},i;
//   for(i=0;i<N;i++) {
//     if(a[i] < 0 ) {
//       continue;
//     }
//     printf("%3d",a[i]);
//   }
//   printf("\n");
// }


// #define N 100
// int main () {
//   int i,month;
//   int birth[13]={0}; /*birth [1]~birth [12]分别保存1~12月过生日的学生数*/

//   for(i=1; i<=N; i++) {
//     scanf("%d",&month);
//     if(month >=1 && month <=12) {
//       birth[month]++;
//     }
//   }

//   for(i=1;i<13;i++) {
//     printf("%dmonth %d\n",i,birth[i]);
//   }
// }


// int main() {
//   int i,n;
//   long sum=0;long cal(int);

//   scanf("%d",&n);
//   for(i=1; i<=n; i++) {
//     sum = sum + cal(i);
//   }
//   printf("1+(1+2)+...+(1+2+...+n)=%ld\n",sum);
// }

// long cal(int m) {
//   static long s=0;
//   s=s+m;
//   return s;
// }

// int main() {
//   char ch;
//   FILE *f1,*f2;
//   f1=fopen("data1.txt","r");
//   f2=fopen("data2.txt","w");

//   do {
//     ch = fgetc(f1);
//     fputc(ch,f2);
//   }while(!feof(f1));

//   fclose(f1);
//   fclose(f2);
// }


// int main() {
//   float x,y;
//   scanf("%f",&x);

//   if(x>0) {
//     y=sqrt(2*x);
//   }else if(x<0) {
//     y = 1.0/(3*exp(x));
//   }else {
//     y = 0;
//   }

//   printf("y=%7.2f\n",y);
// }


int main() {
  int a[10],i,temp;
  for(i=0; i<10; i++) {
    scanf("%d",&a[i]);
    printf("%5d",a[i]);
  }

  printf("/n");
  temp=a[9];
  for(i=9; i>0; i--) {
    a[i]=a[i-1];
  }
  a[0]=temp;
  for(i=0;i<10;i++) {
    printf("%5d",a[i]);
  }
  printf("/n");
}