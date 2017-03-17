/*
    说明：任务02_2 字符转换
    姓名：孙程程
    学号：2016011442
    班级：2016级3班
    日期：2017/3/16
*/
#include<stdio.h>
int main(void)
{
    printf("请输入三个用空格隔开的小写英文字母：");
    
    char a,b,c;                          //定义 a,b,c为字符型变量
    scanf("%c %c %c",&a,&b,&c);
    printf("%d %d %d\n",a,b,c);          //输出的三个小写字母的ASCII码
    printf("%c %c %c\n",a-32,b-32,c-32); //输出三个小写字母对应的大写字母
    
    return 0;

}
