/*
���ڣ�2017/3/19 18:49
��Ŀ����һ����Χ�������ĺ�
�ص㣺ѧԺ 206
*/
#include<stdio.h>
#include<math.h>
int main(void)
{   
    int i;
    int j;
    int n;
    int num = 0;
    printf("������ʲô��Χ�ڵ������ĺͣ�\n");
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
    printf("%d�������������ĺ�Ϊ��%d\n",n,num);
    return 0;
}