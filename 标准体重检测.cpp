#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    printf ("������������ߣ�");
        scanf ("%d",&a);
    printf ("�������������أ�");
        scanf ("%d",&b);
    c=a-110;
        printf ("���ı�׼�����ǣ�%d\n",c);
    d=b-c;
    if (d>5)
    {
        printf ("��̫����Ŷ �����ʰɣ�\n");
    }
    else if (d<5)
    {
        printf ("��̫����Ŷ ��Ե�ɣ�\n");
    }
    else
    {
        printf ("��Ĳ���Ŷ �������֣�\n");
    }

    return 0;

}