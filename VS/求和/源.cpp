# include <stdio.h>
int main(void)
{
    int x = 0,y = 0;
    printf("�ܱ�7�����ĺ�Ϊ��");
    for (int i = 0 ;i<=100;i++)
    {
        if (i % 7 == 0)
        {
            x += i;
        }   
        else
        {
            y += i;
        }
    }
    printf("%d\n", x);
    printf("���ܱ������ĺ�Ϊ��%d", y);
return 0;
}