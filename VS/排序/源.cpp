#include "stdio.h"
void main()
{
//����
	int a[10];
	printf("�������������֣�");
	for (int i = 0; i < 6; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("����ǰ��\n");
		for (int i = 0;i<6;i++)
		{
			printf("%d",a[i]);
			printf(" ");
		}
		printf("\n");
//��ʼ����
		//�������� �� �����С - 1
		for (int i = 0; i < 6 - 1;i++)
		{
			//����Աȴ����� �����С - ���� - 1
			for (int j = 0; j<6-i-1;j++)
			{
				//��ʼ���Ƚ��ж�
				if (a[j] > a[j + 1])
				{
					// temp�������洢�������
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
//�����
		printf("�����\n");
		for (int i = 0; i < 6; i++)
		{
			printf("%d", a[i]);
			printf(" ");
		}
}