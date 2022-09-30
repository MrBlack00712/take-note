#include "stdio.h"
void main()
{
//排序
	int a[10];
	printf("请输入六个数字：");
	for (int i = 0; i < 6; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("排序前：\n");
		for (int i = 0;i<6;i++)
		{
			printf("%d",a[i]);
			printf(" ");
		}
		printf("\n");
//开始排序：
		//排序轮数 ： 数组大小 - 1
		for (int i = 0; i < 6 - 1;i++)
		{
			//排序对比次数： 数组大小 - 轮数 - 1
			for (int j = 0; j<6-i-1;j++)
			{
				//开始做比较判断
				if (a[j] > a[j + 1])
				{
					// temp是用来存储大的数组
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
//排序后
		printf("排序后\n");
		for (int i = 0; i < 6; i++)
		{
			printf("%d", a[i]);
			printf(" ");
		}
}