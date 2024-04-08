#include <stdio.h>
#include <string.h>

// int main() {
//   int i,j,k;
//   char a[5] = {'*','*','*','*','*'};

//   for(i=0; i<4; i++) {
//     printf("\n");

//     for(j=0; j<=3*i;j++) {
//       printf("$");
//     }

//     for(k=0; k<5; k++) {
//       printf("%c",a[k]);
//     }
//   }
// }

// int fib(int n) {
//   if(n==0 || n==1) {
//     return 1;
//   }else {
//     return fib(n-1)+fib(n-2);
//   }
// }

// int main() {
//   int i;
//   for(i=0; i<=4; i++) {
//     printf("%5d",fib(i));
//   }
//   printf("\n");
// }


// int main() {
//   int n = 0;
//   char str[80]="Abc+mNp-xyZ";
//   printf("%s\n",str);
//   while(str[n] != '\0') {
//     str[n++] = str[n] >= 'a' && str[n] <= 'z'? str[n] - 'a' + 'A' : str[n];
//   }
//   printf("%s\n",str);
// }

// int f(int n) {
//   static int a=0;
//   int b=0;
//   a+=n;
//   b+=a;
//   return b;
// }

// int main() {
//   printf("%d\n",f(5));
//   printf("%d\n",f(10));
// }

// int main() {
//   int i,n,age,a[30];
//   for(i=0;i<30;i++) {
//     a[i]=0;
//   }

//   scanf("%d",&n);  /*   输入人数<30  */
//   for(i=0; i<n; i++) {
//     scanf("%d",&age);  /*  输入年龄   */
//     if(age<17||age>20) {
//       continue;
//     }else {
//       switch(age) {
//         case 17:
//         case 18:
//         case 19:
//         case 20:
//           a[age-17]++;
//       }
//     }
//   }

//   for(i=0; i<=3; i++) {
//     printf("age=%dnumber=%d\n",i+17,a[i]);
//   }
// }


// int main() {
//   int n;
//   char str[80] = {'1','2','3','4','5'},*p;
//   printf("Input a string");
//   // gets(str); /*输入字符串*/
//   n=strlen(str);
//   p=str+n-1;
//   while(p>=str) {
//     printf("%c",*p);
//     p--;
//   }
//   printf("/n");
// }

// int main() {
//   int week;
//   static char *weekname[]={"Sunday","Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday"};

//   while(1){
//     printf("Input weekday.");
//     scanf("%d",&week);
//     if(week<0 || week >6) {
//       break;
//     }
//     printf("weekday:%d->%s\n",week,weekname[week]);
//   }
// }

// #define N 100

// int main() {
//   int i,max,n,a[N];
//   for(i=0; i<N; i++) {
//     scanf("%d",&a[i]);
//   }

//   max=a[0];
//   n=0;
//   for(i=1; i<N; i++) {
//     if(a[i] > max) {
//       max = a[i];
//       n=i;
//     }
//   }

//   printf("%d%d\n",n,max);
// }

// int main() {
//   int score;
//   scanf("%d",&score);
//   printf("%d:",score);
//   if(score < 0 || score > 100) {
//     printf("Input error!\n");
//   }else {
//     if(score >= 80) {
//       printf("Good\n");
//     }else if(score >= 60) {
//       printf("Pass\n");
//     }else {
//       printf("No pass\n");
//     }
//   }
// }

