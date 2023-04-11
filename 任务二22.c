#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("请输入一个字符:");
	scanf("%c",&a);
	printf("字符'%c'的ASCII值是:%d\n",a,a);
	printf("请输入32到127之间的一个整数:");
	scanf("%d",&b);
	printf("整数%d对应的字符是'%c'\n",b,b);
	return 0;
 } 
