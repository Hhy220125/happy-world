#include<stdio.h>
int main()
{
	float c,f;
	char m;
	
	printf("�����ܣ����ϡ������¶�ת��\n\n");
	printf("ת�����ͣ�c-����ת���ϣ�f-����ת���ϣ�:");
	scanf("%c",&m);
	while(1)
	{
		if(m=='c'||m=='C')
	    {
		   	printf("�����¶�:");
		   	scanf("%f",&c);
		   	f=(9/5)*c+32;
		   	printf("�����¶�:%f\n",f);
		   	break;
		   
		   }
		   else if(m=='f'||m=='F')
		   {
		   printf("�����¶�:");
		   	scanf("%f",&f);
		   	c=(5.0/9)*(f-32);
		   	printf("�����¶�:%f\n",c);
		   	break;
		   	
		   }
		   else
		   {
		   	printf("������ѡ��������ѡ��\n"); 
		   }
	}
		   
		
		
	
	return 0;
	
 }
