#include<stdio.h>
int main()
{
	int year;
	printf("输入一个年份\n");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("闰年\n");
	else
		printf("平年\n");
	return 0;
}
