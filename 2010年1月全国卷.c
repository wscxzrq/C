#include <stdio.h>

// int main() {
//   int color=2;
//   switch(color) {
//     case 1: 
//       printf("red\n");
//       break;
//     case 2:
//       printf("yellow\n");
//     case 3:
//       printf("blue\n");
//   }
// }

// int main() {
//   int m,n;
//   for(m=1; m<=3; m++) {
//     for(n=1; n<=2*m-1;n++) {
//       printf("*");
//     }
//     printf("\n");
//   }
// }

// int main () {
//   int a[2][3]={{1,2,3},{4,5,6}};
//   int b[3][2],i,j;
//   for(i=0; i<=1; i++) {
//     for(j=0; j<=2; j++) {
//       printf("%5d",a[i][j]);
//       b[j][i]=a[i][j];
//     }
//     printf("\n");
//   }
//   printf("array b:\n");
//   for(i=0;i<=2;i++) {
//     for(j=0; j<=1; j++) {
//       printf("%5d",b[i][j]);
//     } 
//   }
// }

// #define N 10
// struct student {
//   char name[20];
//   char sex;
//   int score;
// } stu[N];

// int main() {
//   int i;
//   float aver,sum=0;

//   for(i=0; i<N; i++) {
//     scanf("%d,%c%s",&stu[i].score,&stu[i].sex,&stu[i].name);
//     sum=sum+stu[i].score;
//   }
//   aver=sum / N;
//   printf("aver=%6.2f\n",aver);
// }


// int main() {
//   FILE *fp;
//   char ch;
//   if(fp=fopen("text.txt","w") == NULL) {
//     exit(0);
//   }
//   while((ch=getchar() != '?')) {
//     fputc(ch,fp);
//   }
//   fclose(fp);
// } 

// int age(int n) {
//   if(n==1){
//     return(10);
//   }else {
//     return(age(n-1)+2);
//   }
// }

// int main() {
//   printf("%d\n",age(5));
// }

// int main() {
//   int a,b,c,t;
//   scanf("%d%d%d",&a,&b,&c);
  
//   if(a > b) {
//     t=a;
//     a=b;
//     b=t;
//   }

//   if(a > c) {
//     t=a;
//     a=c;
//     c=t;
//   }

//   if(b>c) {
//     t=b;
//     b=c;
//     c=t;
//   }

//   printf("a=%d,b=%d,c=%d",a,b,c);
// }

int swap(int *p1, int *p2) {
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

int main() {
  // int a=1,b=2;
  // scanf("%d%d",&a,&b);
  // swap(&a,&b);
  // printf("a=%d,b=%d",a,b);


int x=3;
do{
    printf("%5d",x-=2);
  }while(!(--x));
  return 0;
}