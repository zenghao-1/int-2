#include<stdio.h>
int main()
{
	int year;
	printf("����һ�����\n");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("����\n");
	else
		printf("ƽ��\n");
	return 0;
}
