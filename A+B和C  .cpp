A+B和C (15)
时间限制 1000 ms 内存限制 32768 KB 代码长度限制 100 KB 判断程序 Standard (来自 小小)
题目描述
给定区间[-2的31次方, 2的31次方]内的3个整数A、B和C，请判断A+B是否大于C。

输入描述:
输入第1行给出正整数T(<=10)，是测试用例的个数。随后给出T组测试用例，每组占一行，顺序给出A、B和C。整数间以空格分隔。


输出描述:
对每组测试用例，在一行中输出“Case #X: true”如果A+B>C，否则输出“Case #X: false”，其中X是测试用例的编号（从1开始）。

#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b,c) ((a+b)>c)?1:0
int main()
{
    int num,i,j;
    scanf("%d",&num);
    long data[num][3];
    for(i=0;i<num;i++)
        scanf("%ld %ld %ld",&data[i][0],&data[i][1],&data[i][2]);
    for(i=0;i<num;i++)
        if(MAX(data[i][0],data[i][1],data[i][2]))
            printf("Case #%d: true\n",i+1);
        else
             printf("Case #%d: false\n",i+1);
    return 0;
}
