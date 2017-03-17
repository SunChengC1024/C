/*
    说明：任务02_3 求圆柱体面积与体积
    姓名：孙程程
    学号：2016011442
    班级：2016级3班
    日期：2017/3/16
*/
#include<stdio.h>
#define PI 3.14                      //定义π的值

int main(void)
{
    double r,h,表面积,体积;          //定义半径和高 r,h为浮点型变量
    printf("请输入圆柱体半径：");
    scanf("%lf",&r);  
    printf("请输入圆柱体的高：");
    scanf("%lf",&h);

    表面积=PI*r*r*2+2*PI*r*h;        //计算表面积的表达式
    printf("圆柱体的表面积是：%.2lf\n",表面积);
    体积=PI*r*r*h;                   //计算体积的表达式
    printf("圆柱体的体积是：%.2lf\n",体积);

return 0;

}