#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// int main() {
//   int x=1,a=0,b=0;
//   switch(x) {
//     case 0:
//       a++;
//       break;
//     case 1:
//       b++;
//     case 2:
//       a++;
//       b++;
//       break;
//     case 3:
//       a++;
//       b++;
//   }
//   printf("a=%d,b=%d\n",a,b);
// }

// int main() {
//   int a=10,b=20,*p1=&a,*p2=&b;
//   *p1=20;
//   *p2=40;
//   if(*p2>*p1) {
//     *p1=*p2;
//   }
//   printf("a=%d,b=%d\n",a,b);
// }

// f(int b) {
//   static int y=3;
//   return (b+y++);
// }

// int main() {
//   int a=2,i,k;
//   for(i=0; i<2; i++) {
//     printf("%d\n",f(a++));
//   }
// }

// int funs(int n) {
//   if(n==1 || n==2) {
//     return 2;
//   }else {
//     return n+funs(n-1);
//   }
// }

// int main() {
//   int x=4;
//   printf("S=%d\n",funs(x));
// }

// #define N 10
// int main() {
//   int i,j,t,a[N];

//   for(i=0;i<N;i++) {
//     scanf("%d",&a[i]);
//   }
//   for(i=0;i<N-1;i++) {
//     for(j=N-1;j>i+1;j--) {
//       if(a[j]<a[j-1]){
//         t=a[j];
//         a[j] = a[j-1];
//         a[j-1]=t;
//       }
//     }
//   }
//   for(i=0; i<N;i++) {
//     printf("%5d",a[i]);
//   }
//   printf("\n");
// }


// int main() {
//   int lines = 0;
//   char ch;
//   FILE *fp;
//   fp=fopen("file.dat","r");
//   while(!feof(fp)) {
//     ch=fgetc(fp);
//     if(ch =='\n') {
//       lines++;
//     }
//   }
//   printf("Lines=%d\n",lines);
//   fclose(fp);
// }


// typedef struct {
//   char name[20];
//   int math,ehglish,C;
//   float sum,aver; /* 总成绩和平均成绩 */
// }STU;

// int main() {
//   STU st[10],*p;
//   int i;
//   for(i=0;i<10;i++) {
//     printf("Input name:");
//     scanf("%s",st[i].name);
//     printf("Input 3 score:");
//     scanf("%d,%d,%d",&st[i].math,&st[i].ehglish,&st[i].C);
//   }

//   for(p=st;p<st+10;p++) {
//     p->sum = p->math+p->ehglish+p->C;
//     p->aver = p->sum/3;
//     printf("name=%s,sum=%5.1f,aver=%5.1f\n",p->name,p->sum,p->aver);
//   }
// }

// int main() {
//   float x,y;
//   scanf("%f",&x);
//   if(x<=0) {
//     y=sin(x);
//   }else if(x>10) {
//     y=1/(x*x*x+x*x+1);
//   }else {
//     y=x*x+1;
//   }
//   printf("x=%6.2f,y=%6.2f\n",x,y);
// }


float temp(float x) {
  float t;
  t=9.0/5*x+32;
  return t;
}

int main() {
  float F,C;
  scanf("%f",&C);
  F=temp(C);
  printf("C=%6.2f,F=%6.2f\n",C,F);
}