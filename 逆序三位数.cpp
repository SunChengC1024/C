#include<stdio.h>
int main(void)
{
    printf("������һ����λ������");
    int a,b;
    scanf("%d",&a);
    if(a<1000&&a>=100)
    {
        b=a/100+(a%10)*100+(a/10%10)*10; 
        printf("�������������ǣ�%d\n",b);
    }
       
    else
        printf("�ⲻ����λ���� ���������룡\n");

    return 0;
}
    