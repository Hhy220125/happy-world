#include<stdio.h>
int main()
{
	int grade;
	char n,t;
	//t=getchar();
	//putchar(t);
	printf("�������㷨���ͣ� I||i--if���㣬S||s--switch ���㣩�� ");
	
	while(1)                          //1����ʲô 
	{
	scanf("%c",&t);
	//int grade=-1;
    //printf("����������һ����0~100���ĳɼ�����!\n");
	    	
	    if(t=='I' ||t=='i'||t=='S' || t=='s')             //��Ҫ��char �ַ��������� 
	    {  printf("��������ĳɼ���",grade); 
		   scanf("%d",&grade);
		   
		   n=getchar();                                 //getchar ��putchar��ʹ�� 
		   putchar(n);
		   
		   if(t=='I'||t=='i')
		   {
			  if(grade<0||grade>100)
		     	{
				 
			    	printf("����������һ����0~100���ĳɼ�����!��\n");
				    continue;
		        	}
			else if(grade<60)
			
				printf("�ɼ�������\n");
			
			else if(grade>=60&&grade<70)                  //if ��else ��ʹ�ò��á�{}����
			                                              //���ÿ����֧������Ū�Ļ�����ֻ�������һ��ֵ 
			
				printf("�ɼ��������еȣ�\n");
			
			else if(grade>=70&&grade<80)
			
				printf("�ɼ����ã�\n");
		   else if(grade>80&&grade<=100)
			
				printf("�ɼ����㣡\n");
		}
		    else if(t=='S'||t=='s')
		    
		   {//printf("%d��Ӧ�ĳɼ��ȼ�Ϊ%c\n",grade,n); 
		        switch(grade/10)
		       {case 10:n='a';break;
			   case 9:n='b';break;
			   case 8:n='c';break;
			   case 7:n='d';break;
			   case 6:n='e';break;
			   case 1:n='f';break;
			   case 2:
			   case 3:
			   case 4:
			   case 5:n='f';break;
			   //printf("%d��Ӧ�ĳɼ��ȼ�Ϊ%c\n",grade,n);
			   default :printf("����������һ����0~100���ĳɼ�����!\n");break;}
				  printf("%d��Ӧ�ĳɼ��ȼ�Ϊ%c\n",grade,n);
				  break;	
				  return 0;}
	}}}
