# include <stdio.h>
int main(void)
{
    int x = 0,y = 0;
    printf("能被7整除的和为：");
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
    printf("不能被整除的和为：%d", y);
return 0;
}