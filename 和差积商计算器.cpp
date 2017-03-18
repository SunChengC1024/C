/*
项目：计算器
日期：2017/3/17
*/
#include<stdio.h>
int main(void)
{
    int a,b;
    printf("请输入两个整数 用空格隔开：\n");
    scanf("%d %d",&a,&b);
    printf("和%5d\n差%5d\n积%5d\n商%5.2lf\n取余%5d\n",a+b,a-b,a*b,a/b*1.0,a%b);

    return 0;
}