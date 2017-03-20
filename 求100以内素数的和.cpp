/*
日期：2017/3/19 18:49
项目：求一定范围内素数的和
地点：学院 206
*/
#include<stdio.h>
#include<math.h>
int main(void)
{   
    int i;
    int j;
    int n;
    int num = 0;
    printf("您想求什么范围内的素数的和？\n");
    scanf("%d",&n);
    
    for(i=2; i<=n; i++)
    {
        for(j=2; j<=i; j++)
        {
           if( i%j==0 )
               break;
        }
        if(j>=i)
        {
            printf("%3d\n",i);
            num += i;
        }
    }
    printf("%d以内所有素数的和为：%d\n",n,num);
    return 0;
}