#include <stdio.h>
#include <string.h>

// int main () {
//   int i,s=0;
//   for(i=1;i<10;i+=2) {
//     s+=i+1;
//   } 
//   printf("%d\n",s);
//   return 0;
// }


// int main () {
//   int x=15,y=21,z=0;
//   switch(x%3) {
//     case 0:
//       z++;
//       break;
//     case 1:
//       z++;
//     switch(y%2) {
//       default:
//         z++;
//       case 0:
//         z++;
//         break;
//     }
//   }
//   printf("%d\n",z);
// }

// int main () {
//   int a=0,b=5,c=3;
//   while(c>0 && a<5) {
//     b=b-1;
//     ++a;
//     c--;
//   }
//   printf("%d,%d,%d\n",a,b,c);
// }

// int z=5;
// f() {
//   static int x=2;int y=5;
//   x=x+2;
//   z=z+5;
//   y=y+z;
//   printf("%5d%5d\n",x,z);
// }

// int main() {
//   static int x=10; int y;
//   y=z;
//   printf("%5d%5d\n",x,z);
//   f();
//   printf("%5d%5d\n",x,z);
//   f();
// }

// struct prob {
//   char *a;
//   int b;
// } x[] = {"Zhang San",19,"Li Si",21,"Wang Wu",20};
// int main () {
//   int i,m1,m2;
//   m1 = m2 = x[0].b;
//   for(i=1; i<3; i++) {
//     if(x[i].b > m1) {
//       m1=x[i].b;
//     }else if(x[i].b < m2) {
//       m2 = x[i].b;
//     }
//   }

//   for(i=0; i<3; i++) {
//     if(x[i].b != m1 && x[i].b != m2) {
//       printf("%s:%d\n",x[i].a,x[i].b);
//       break;
//     }
//   }
// }

// long fac(int n) {
//   if(n == 0 || n == 1) {
//     return (1);
//   }else {
//     return n * fac(n-1);
//   }
// }

// int main() {
//   int m;
//   long int fa;

//   for(m=0;m<=10; m++) {
//     fa = fac(m);
//     printf("%d!=%ld\n",m,fa);
//   }
// }


// int main() {
//   int i,j,a[5][5];
//   for(i=0; i<5; i++) {
//     for(j=0; j<5; j++) {
//       a[i][j] = i + j;
//     }
//   }
//   for(i=0; i<5; i++) {
//     for(j=0; j<5; j++) {
//       printf("%2d",a[i][j]);
//       if(j == 4) {
//         printf("\n");
//       }
//     }
//   }
// }


// int main() {
//   char ch;int sumch = 0;
//   FILE *fp;
//   fp = fopen("str.dat","w");
//   while((ch=getchar())!=NULL) {
//     sumch ++;
//     putchar(ch);
//     fputc(ch,fp);
//   }

//   printf("sumch=%d\n",sumch);
//   fprintf(fp,"sumch=%d\n",sumch);
//   fclose(fp);
// }


// int main() {
//   float x;
//   scanf("%f",&x);
//   printf("%.4f,%.4f,%.4f,%.4f,%.4f",x,sprt(x),x*x,pow(x,1.0/3),pow(x,3));
// }

// int main() {
//   int a,b,c,max;
//   scanf("%d%d%d",&a,&b,&c);
//   if(a>b) {
//     max = a;
//   }else {
//     max = b;
//   }
//   if(c > max) {
//     max = c;
//   }
//   printf("a=%d,b=%d,c=%d,max=%d\n",a,b,c,max);
// }

int main() {
  int i;
  float f[22] = {1,1},sum=0;

  for(i=2; i<=21; i++) {
    f[i] = f[i-1] + f[i-2];
    sum+=f[i]/f[i-1];
  }
  printf("sum=%.4f\n",sum);
}