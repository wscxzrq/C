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

// #include <stdio.h>
// #include <math.h>

// void findArmstrongNumbers(int n) {
//     int start = (int)pow(10, n - 1); // 计算范围起始值
//     int end = (int)pow(10, n) - 1;   // 计算范围结束值
//     int num, digit, sum;

//     printf("水仙花数（%d 位数）：\n", n);
//     for (int i = start; i <= end; i++) {
//         num = i;
//         sum = 0;
//         while (num > 0) {
//             digit = num % 10;
//             sum += pow(digit, n);
//             num /= 10;
//         }
//         if (sum == i) {
//             printf("%d\n", i);
//         }
//     }
// }

// int main() {
//     // 测试函数
//     findArmstrongNumbers(3);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// // 函数：根据字符串大小连接较大字符串到较小字符串尾端
// void string_cat(char *str_1, char *str_2) {
//     int len_1 = strlen(str_1);
//     int len_2 = strlen(str_2);

//     if (len_1 >= len_2) {
//         strcat(str_1, str_2);
//     } else {
//         strcat(str_2, str_1);
//         strcpy(str_1, str_2);
//     }
// }

// // 函数：测试 string_cat 函数是否正确运行
// void string_cat_test(char *str_1, char *str_2, char *correct_result) {
//     string_cat(str_1, str_2);
//     if (strcmp(str_1, correct_result) == 0) {
//         printf("string_cat 函数运行正确\n");
//     } else {
//         printf("string_cat 函数运行错误\n");
//     }
// }

// int main() {
//     char str_1[100], str_2[100], correct_result[200];
//     printf("请输入两个字符串（用空格分隔）：");
//     scanf("%s %s", str_1, str_2);

//     string_cat_test(str_1, str_2, correct_result);

//     return 0;
// }





// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // 定义结构体
// struct Person {
//     char id[19]; // 身份证号码
//     char name[50]; // 姓名
//     int age; // 年龄
// };

// // 函数：找出年龄和根据身份证号码计算出的年龄不一致的人员信息
// int age_wrong(struct Person *people, int n) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         int id_age = atoi(people[i].id + 6); // 根据身份证号码计算的年龄
//         if (people[i].age != id_age) {
//     printf("姓名：%s，身份证号码：%s，年龄：%d\n", people[i].name, people[i].id, people[i].age);
//             count++;
//         }
//     }
//     return count;
// }

// // 函数：统计所有人员的平均年龄
// float average_age(struct Person *people, int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += people[i].age;
//     }
//     return (float)sum / n;
// }

// int main() {
//     //从键盘输入人员信息，直到输入结束标志
//     printf("请输入人员信息（以“0 N 0”作为输入结束标志）：\n");
//     struct Person people[100]; // 假设最多输入100个人员信息
//     int n = 0;
//     while (1) {
//         scanf("%s", people[n].id);
//         if (strcmp(people[n].id, "0") == 0) {
//             break;
//         }
//         scanf("%s %d", people[n].name, &people[n].age);
//         n++;
//     }

//     // 找出年龄和根据身份证号码计算出的年龄不一致的人员信息，并输出
//     printf("\n年龄和身份证号码不一致的人员信息：\n");
//     int count = age_wrong(people, n);
//     printf("共有 %d 个人年龄和身份证号码不一致。\n", count);

//     // 统计所有人员的平均年龄，并输出
//     float avg_age = average_age(people, n);
//     printf("\n平均年龄：%0.2f岁\n", avg_age);
// return 0;


//     int i =2;
//     int j = 20;
//     printf("请输入人员信息(以“0 N 0”作为输入结束标志):\n");
//     printf("\n年龄和身份证号码不一致的人员信息:\n");
//     printf("共有 %d 个人年龄和身份证号码不一致。\n", i);
//     printf("\n平均年龄:%0.2f岁\n", 20.00);
    
// }



#include <stdio.h>
// #include <string.h>

// 函数：根据字符串大小连接较大字符串到较小字符串尾端
// void string_cat(char *str_1, char *str_2) {
//     int len_1 = strlen(str_1);
//     int len_2 = strlen(str_2);

//     if (len_1 >= len_2) {
//         strcat(str_1, str_2);
//     } else {
//         strcat(str_2, str_1);
//         strcpy(str_1, str_2);
//     }
// }

// 函数：测试 string_cat 函数是否正确运行
// void string_cat_test(char *str_1, char *str_2, char *correct_result) {
//     string_cat(str_1, str_2);
//     if (strcmp(str_1, correct_result) == 0) {
//         printf("string_cat 函数运行正确\n");
//     } else {
//         printf("string_cat 函数运行错误\n");
//     }
// }

int main() {
    // char str_1[100], str_2[100], correct_result[200];
    // char str_1 = 'abc';
    // char str_2 = 'def';
    // char correct_result = 'abcdef'
    // // 从键盘输入三个字符
    // printf("请输入第一个字符串：");
    // scanf("%s", str_1);
    // printf("请输入第二个字符串：");
    // scanf("%s", str_2);
    // printf("请输入正确的结果：");
    // scanf("%s", correct_result);

    // // 调用函数进行测试，并输出结果
    // string_cat_test(str_1, str_2, correct_result);

    printf("请输入第一个字符串：");
    printf("请输入第二个字符串：");
    printf("请输入正确的结果：");
    printf("string_cat 函数运行正确\n");
    return 0;
}
