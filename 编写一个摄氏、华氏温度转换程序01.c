#include<stdio.h>
int main()
{
	float c,f;
	char m;
	
	printf("程序功能：摄氏、华氏温度转换\n\n");
	printf("转换类型（c-摄氏转华氏，f-华氏转摄氏）:");
	scanf("%c",&m);
	while(1)
	{
		if(m=='c'||m=='C')
	    {
		   	printf("摄氏温度:");
		   	scanf("%f",&c);
		   	f=(9/5)*c+32;
		   	printf("华氏温度:%f\n",f);
		   	break;
		   
		   }
		   else if(m=='f'||m=='F')
		   {
		   printf("华氏温度:");
		   	scanf("%f",&f);
		   	c=(5.0/9)*(f-32);
		   	printf("摄氏温度:%f\n",c);
		   	break;
		   	
		   }
		   else
		   {
		   	printf("请重新选择！请重新选择！\n"); 
		   }
	}
		   
		
		
	
	return 0;
	
 }
