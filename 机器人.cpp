/*
日期：2017/3/14 22：18
地点：宿舍
*/
#include<stdio.h>
int main(void)
{
    printf("你好 我是机器人 用数字给我打个招呼吧！\n");
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("你好，早上好\n");
        break;
    case 2:
        printf("早上好\n");
        break;
    case 3:
        printf("晚上好\n");
        break;
    case 4:
        printf("再见\n");
        break;
    default:
        printf("听不懂\n");
        break;
    }

    return 0;
}