/*
日期：2017/3/17 21:45
项目：求平均数计算器
地点：宿舍
*/
#include<stdio.h>
int main(void)
{
    int 数字个数;
    int n=1;
    double 所有数字的和 = 0;
    double 数字,平均数;

    printf("请输入您想计算的数字的个数：");
    scanf("%d",&数字个数);

    while (n<=数字个数)
    {
        printf("请输入第%d个数：",n);
        scanf("%lf",&数字);
        
        所有数字的和 += 数字;
        n++;
    }
    平均数=所有数字的和/数字个数;
    printf("平均数为：%.2lf\n",平均数);
    
    return 0;
}