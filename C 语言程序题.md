# 2024 下半年 福建卷

## 输出程序结果 每题 5 分

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
    
  }
}
```

