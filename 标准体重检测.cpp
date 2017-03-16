#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    printf ("请输入您的身高：");
        scanf ("%d",&a);
    printf ("请输入您的体重：");
        scanf ("%d",&b);
    c=a-110;
        printf ("您的标准体重是：%d\n",c);
    d=b-c;
    if (d>5)
    {
        printf ("您太胖了哦 减减肥吧！\n");
    }
    else if (d<5)
    {
        printf ("您太瘦了哦 多吃点吧！\n");
    }
    else
    {
        printf ("身材不错哦 继续保持！\n");
    }

    return 0;

}