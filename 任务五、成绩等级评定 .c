#include<stdio.h>
int main()
{
	int grade;
	char t,n;
	printf("�������㷨���ͣ� I||i--if���㣬S||s--switch ���㣩�� ");
	t=getchar();
	getchar();
	while(1)                          
	{ if(t=='I' ||t=='i'||t=='S' || t=='s')             //��Ҫ��char �ַ��������� 
		{  
		printf("��������ĳɼ���",grade); 
		   scanf("%d",&grade);
		   
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
				break;
	    	}
		    else if(t=='S'||t=='s')
		    
		   {   
		          char n;
		        
		        n=grade/10;
		        
		        switch(n)
		       {case 10:n='A';break;
			   case 9:n='B';break;
			   case 8:n='C';break;
			   case 7:n='D';break;
			   case 6:n='E';break;
			   case 1:
			   case 2:
			   case 3:
			   case 4:
			   case 5:n='f';break;
			   default :grade<0&&grade>100;
		       printf("����������һ����0~100���ĳɼ�����!��\n");break;
			  
			   }
			   printf("%d��Ӧ�ĳɼ��ȼ�Ϊ%c\n",grade,n);
			   break;
			  return 0;
}     }  }  }
