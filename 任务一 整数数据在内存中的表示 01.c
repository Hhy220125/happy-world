#include<stdio.h>
//#include<stdlib.h>
int main()
{
	short a,b,c;
	
	scanf("%hd",&a);
	scanf("%hd",&b);

	c=a+b;
	printf("a=%hd,",a);
	printf("b=%hd,",b);
	printf("c(a+b)=%hd",c);
	system("pause");

    return 0; } 
