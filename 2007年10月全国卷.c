#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// int main(){
//   int a=1,b=2,c=3;
//   if(a<=c) {
//     if(b==c) {
//       printf("a=%d\n",a);
//     }else {
//       printf("b=%d\n",b);
//     }
//   }
//   printf("c=%d\n",c);
//   return 0;
// }

// int f(int n) {
//   static int m=5;
//   return ++m+n;
// }

// int main(){
//   int i;
//   for(i=0;i<3;i++) {
//     printf("%5d",f(i));
//   }
//   printf("\n");
//   return 0;
// }

// #define SIZE 4;

// int main(){
//   int n[SIZE]={8,3,4,1};
//   int i,j;
//   for(i=0; i<SIZE; i++) {
//     printf("%d",n[i]);
//     for(j=1;j<=n[i];j++) {
//       printf("*");
//     };
//     printf("\n");
//   }
// }

// int fm(int a,int b) {
//   if(b==1) {
//     return a;
//   }else {
//     return a+fm(a,b-1);
//   }
// }

// int main(){
//   printf("%d",fm(4,3));
// }

// void fun(int num, int a[]) {
//   int i;
//   for(i=0; i< num;i++) {
//     a[i]=a[i]*a[i];
//   }
// }

// int main(){
//   int i,b[5]={1,2,3,4,5};
//   fun(5,b);
//   for(i=0;i<5;i++) {
//     printf("%5d",b[i]);
//   }
//   printf("\n");
// }

// int main() {
//   char ch;
//   FILE *fp;
//   if((fp=fopen("file.dat","w")) == NULL) {
//     printf("Can not open file\n");
//     exit(0);
//   }
//   ch = getchar();
//   while(ch !='#') {
//     fputc(ch,fp);
//     ch=getchar();
//   }
//   fclose(fp);
// }


int main(){
  float x,y;
  scanf("%f",&x);

  if(x<0){
    printf("input error!\n");
  }else {
    switch((int)(x/2)) {
      case 0: 
        y=x;
        break;
      case 2:
        y=x*x+1;
        break;
      case 3:
      case 4:
        y=sqrt(x+1);
        break;
      default:
        y=1/(x*x+1);
    }
    printf("x=%7.2f,y=%10.6f\n",x,y);
  }
}
