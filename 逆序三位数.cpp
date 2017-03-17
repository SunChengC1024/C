#include<stdio.h>
int main(void)
{
    printf("请输入一个三位整数：");
    int a,b;
    scanf("%d",&a);
    if(a<1000&&a>=100)
    {
        b=a/100+(a%10)*100+(a/10%10)*10; 
        printf("它的逆序数字是：%d\n",b);
    }
       
    else
        printf("这不是三位整数 请重新输入！\n");

    return 0;
}
    