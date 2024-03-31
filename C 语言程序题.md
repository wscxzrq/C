# 2024 10 月 福建卷

## 输出程序结果 每小题 5 分

```c
main() {
  int a[3][3] = {1,4,17,3,6,19,2,5,18},i,s=0;
  for(i=0; i<=2; i++) {
    s=s+a[i][2-i];
    printf("s=%d\n",s);
  }
}
/*
	s=17
	s=23
	s=25
*/
```

```c
main() {
  int i;
  for(i=0; i<5; i++) {
    switch(i%2) {
      case 0: printf("1");
        break;
      case 1: printf("0");  
    }
  }
}
// 10101
```

```c
main () {
  int x=20,y=40,*p;
  p=&x; 
  printf("%d",*p);
  *p=x+10;
  p=&y;
  printf("%d\n",*p);
  *p=y+20;
  printf("%d,%d\n",x,y);
}
/*
	20
	40
	30,60
*/
```

```c
#include <stdio.h>
#include "string.h"
struct worker{
  char name[15];
  int age;
  float pay;
};
int main() {
  struct worker x;
  char *t="Lilei";
  int d=20;float f=100;
	strcpy(x.name,t);
	x.age=d*2;
  x.pay=f*d;
	printf("%s\t%d\t%.0f\n",x.name, x.age,x.pay);
  return 0;
}
// Lilei 40 2000
```

```c
int f(int a){
  int b=4;
	static int c=4;
	b++; 
	c++; 
	return(a+b+c); 
}
main() {
  int a=4,i;
  for(i=0;i<3;i++) {
    printf("%4d",f(a)); // %4d 表示输出一个十进制整数 占四位 不够的在左侧补空格
  }
}
// 14 15 16
```

## 程序填充题 每小题 6 分

```c
// 求三个数中的最大值和最小值
void maxmin(a,b,c,m,n) {
  int a,b,c,*m,*n;
  int t;
  if(a<b) {
    t=a;
    a=b;
    b=t;
  }
  if(a<c){
    t=a;
    a=c;
   	c=t;
  }
  if(b<c){
    t=b;
    b=c;
    c=t;
  }
  *m=a; // 挖空部分
  *n=b; // 挖空部分
}
main() {
  int a,b,c,max,min;
  printf("Please input a b c:\n");
  scanf("%d%d%d",&a,&b,&c);
  maxmin(a,b,c,&max,&min); // 挖空部分 &max,&min
  printf("a=%d,b=%d,c=%d\n",a,b,c);
  printf("max=%d,min=%d\n",max,min);
}
```

```c
// 下列程序的功能是：统计从键盘输入的字符（$作为结束）中每个小写英文字母出现的个数，n[0]、n[1]、···、n[25]分别存放小写字母a、b、···、z。并输出统计结果。
#include <stdio.h>
main() {
  int a[26]={0},k;
  char c;
  while((c=getchar())!='$') { // c=getchar() 为空
    if(c>='a'&&c<='z') {
      n[c-'a']+=1; // -a 为空
    }
  }
  for(k=0;k<26;k++) { // k<26 为空
      printf("%c:%d\n",k+'a',n[k]);
  }
}
```

```c
// 从键盘输入一个字符串，判断其是否是回文。若是输出“Yes”，否则输出“No”。回文是指正向、反向的拼写都一样。例如：ABCBA、aaaa等是回文；china、ABC等不是回文。
#include <stdio.h>
main() {
  char string[80];
  int i,j,n;
  gets(string); // gets 输入一个以\0 结束的字符串放入数组中
  n=strlen(string);
  j=n-1;
  for(i=0;i<j;i++,j--) {
    if(string[i] != string[j]) {
      break;
    }
    if(i>=j) {
      printf("yes\n");
    }else {
      printf("No\n");
    }
  }
}

```

## 程序设计题 每小题 6 分

编写一个程序用循环结构输出以下图形

<img src="image-20240329100558652.png" alt="image-20240329100558652" style="zoom:25%;" />

```c
main() {
  int i,j;
  for(i=1;i<=5;i++) {
    for(j=1; j<=i;j++) {
      printf("");
    }
    for(j=1;j<=10-(2*i-1);j++) {
      printf("&");
    }
    printf("\n");
  }
}
```

```c
// 输入年份year，如果是闰年，则输出“ Yes!”，否则输出“ No!”。(如果年份可以被 4 整除但不能被 100 整除是闰年，或者年份可以被 400 整除也是闰年)
main() {
  int year;
  scanf("%d",&year);
  if(year%4==0&&year%100!=0||year%400==0) {
   printf("Yes!");
  }else {
   printf("N0!");
  }
  printf("\n");
}
```

```c
// 在主函数中定义两个双精度变量x，y，并输入。利用函数交换两个双精度数x，y，并且要求函数的参数是指针类型。
void swap(double *x, double *y){
  double t;
  t = *x;
  *x = *y;
  *y = t;
}
main() {
  double x,y;
  printf("%lf%lf",&x,&y);
  swap(x,y);
  printf("%f%f\n",x,y);
}
```

# 2005 年 10 月 全国卷

## 程序分析 每小题五分

```c
main() {
  int i;
  for(i=1;i<3;i++) {
    f(i);
  }
}
void f(int j) {  // 1 2 
  static int A=100;
  int k = 1;
  ++k;
  printf("%d\n",j+A+k);
  A-=2;
}
/*
103
102
*/

```

```c
long fun(int n) {
  long s;
  if(n<=2) {
    s = 2;
  }else {
    s = n + fun(n-1);
  }
  printf("%d\t",s);
  return s;
}
int main() {
  fun(5);
  printf("\n");
  return 0;
}
// 2 5 9 14
```

```c
struct prob {
  char *name;
  int age;
};

struct prob s[] = {"LiHua",18,"WangXin",25,"LiuGuo",21};
#define N(a) (sizeof(s) / sizeof(s[0]))  // 48 / 16

void f(struct prob A[],int n);
int main() {
  printf("Size of struct prob: %zu bytes\n", sizeof(struct prob)); // 16
  f(s, N(s));  
  return 0;
}

void f(struct prob A[],int n) {
  int i;
  for(i=0; i<n; i++) {
    printf("%s:%d\n",A[i].name,A[i].age);
  }
}

/*
	LiHua:18
	WangXin:25
	LiuGuo:21
*/
```

```c
void LE(int *a,int b) {
  int x = *a;
  printf("%d\t%d\n",*a,b);
  *a=b; // 25
  b=x; 
}

int main() {
  int x = 10,y = 25;
  LE(&x,y);
  printf("%d\t%d\n",x,y);
  return 0;
}
/*
10 25
25 25
*/
```

```c
// 从键盘输入 420 回车
int main() {
  char c;
  while((c=getchar()) != '\n') {
    switch(c-'0') { // 进行数值类型转换
      case 0:
      case 1:
        putchar(c+2);
      case 2:
        putchar(c+3);
        break;
      case 3:
        putchar(c+4);
      default:
        putchar(c+1);
        break;
    }
    printf("\n");
  }
  return 0;
}
// 5523
```

## 程序填充题 每小题 6 分

```c
// 一个三位整数(100～999)，若各位数的立方和等于该数自身，则称其为“水仙花数”(如：153=13+53+33), 找出所有的这种数
int main() {
  int n,a,b,c; // n、a、b 和c 分别为三位数自身及其个位、十位和百位
  for(c=1; c<=9; c++) {
    for(b=0; b<=9; b++) {
      for(a=0; a<=9; a++) {
        n=c*100+b*10+a;
        if(a*a*a+b*b*b+c*c*c==n) {
          printf("%d\n",n);
        }
      }
    }
  }
  return 0;
}
```

```c
// 输入一个数字(范围在0～9 之间，若不在此范围内显示输入错)，输出对应的英文单词(Zero, One,Two, ……，Nine)。
int main() {
  int i;
  char *digit[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  scanf("%d",&i);
  printf("%d->",i);
  if(i>=0 && i<=9) {
    printf("%s\n",digit[i]);
  }else {
    printf("Input error!\n");
  }
  return 0;
}
```

```c
// 将一个文本文件(ma.dat)拷贝到另一个文本文件(niu.dat)中。
int main() {
  FILE *ma,*niu;
  ma=fopen("ma.dat","r");
  niu=fopen("niu.dat","w");
  while(!feof(ma)) { // feof文件尾测试函数 如果到文件尾 返回非 0 如果没到文件尾 返回 0
    fputc(fgetc(ma),niu); // fgetc:返回当前文件指针指向的字节，同时将文件指针向后移动一位，成功返回字节失败返回 EOF fputc:将一个字节写入文件指针位置  成功返回刚写入字符否则返回 EOF
  }
  fclose(niu);
  fclose(ma);
}
```

## 程序设计题 每小题 6 分

```c
// 输入某学生的数学(math)、英语(english)和C语言(C)的成绩，输出该学生这三门课的成绩、总成绩(sum)和平均成绩( aver)
int main() {
  float math,english,C,sum,aver;
  scanf("%f,%f,%f",&math,&english,&C);
  sum = math+english+C;
  aver = sum/3;
  printf("math=%.1f,english=%.1f,C=%.1f,sum=%.1f,aver=%.2f",math,english,C,sum,aver);
}
```

<img src="image-20240329174633846.png" alt="image-20240329174633846" style="zoom:33%;" />

```c
long fac(int n) {
  long f=1;
  int i;
  for(i=1; i<=n; i++) {
    f*=i;
    return f;
  }
}

long cmk(int m, int k) {
  return fac(m) / (fac(k) *fac(m - k));
}
```

![image-20240331160926727](image-20240331160926727.png)

```c
int main() {
  int i,j,a[5][5];
  for(i=0; i<5; i++) {
    for(j=0; j<5; j++) {
      if(i<j) {
        a[i][j] = 0;
      }else {
        a[i][j] = i-j+1;
      }
    }
  }
  for(i=0; i<5; i++) {
    for(j=0; j<5; j++) {
      printf("%5d",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
```

# 2006 年 10 月 全国卷