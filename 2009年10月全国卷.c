#include <stdio.h>

// int main() {
//   int i,a[5],*p;
//   for(i=4; i>=0; i--) {
//     *(a+i)=i;
//   }

//   for(p=a;p<a+5;p++) {
//     printf("%d\t",*p);
//   }

//   printf("\n");
// }


// gcd(int p, int q) {
//   if(p==q) {
//     return p;
//   }else if(p > q) {
//     return gcd(p-q,q);
//   }else {
//     return gcd(p,q-p);
//   }
// }

// int main() {
//   int m=24,n=36,min,max;
//   max=gcd(m,n);
//   min=m*n/max;
//   printf("max=%d,min=%d\n",max,min);
// }


// s(int a) {
//   static int b=10;
//   if(a%2==1)return (++b);
//   else return(++a);
// }

// void main() {
//   int i;
//   for(i=0;i<3;i++) {
//     printf("%d\t",s(i));
//   }
//   printf("\n");
// }


// struct people {
//   char name[10];
//   float score;
// };


// int main() {
//   struct people per[] = {{"Tom",95.5},{"Mary",88.0}};
//   struct people *p = per+1;
//   printf("%s%.1f\n",per[0].name,p->score);
//   return 0;
// }


// #define PR printf("a=%d,b=%d\n",a,b)
// int main() {
//   int a,b,temp;
//   scanf("%d%d",&a,&b);
//   PR;
//   temp=a;
//   a=b;
//   b=temp;
//   PR;
// }

// #define N 5
// int main() {
//   int i,j,a[N][N],sum=0;

//   for(i=0;i<N;i++) {
//     for(j=0;j<N;j++) {
//       scanf("%d",&a[i][j]);
//       sum+=a[i][j];
//     }
//   }
//   printf("sum=%d\n",sum);
// }

// int main() {
//   int n,k=0;
//   float sum=0.0;
//   scanf("%d",&n);
//   do {
//     k++;
//     if(k%2 != 0) {
//       sum+=1.0/k;
//     }else {
//       sum-=1.0/k;
//     }
//   }while(k<n);
//   printf("sum=%.4f\n",sum);
// }


// float change(float F) {
//   float C;
//   C=5*(F-32)/9;
//   return C;
// }

// int main() {
//   float F;

//   scanf("%f",&F);
//   printf("F=%.2fC=%.2f\n",F,change(F));
// }

int main() {
  int book=1020,day=0;
  while(book >0) {
    book=book/2-2;
    day++;
  }
  printf("day=%d\n",day);
}