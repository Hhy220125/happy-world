#include<stdio.h>
int main()
{
	int grade;
	char n,t;
	//t=getchar();
	//putchar(t);
	printf("请输入算法类型（ I||i--if计算，S||s--switch 计算）： ");
	
	while(1)                          //1代表什么 
	{
	scanf("%c",&t);
	//int grade=-1;
    //printf("请重新输入一个（0~100）的成绩整数!\n");
	    	
	    if(t=='I' ||t=='i'||t=='S' || t=='s')             //需要用char 字符型来代表 
	    {  printf("请输入你的成绩：",grade); 
		   scanf("%d",&grade);
		   
		   n=getchar();                                 //getchar 与putchar的使用 
		   putchar(n);
		   
		   if(t=='I'||t=='i')
		   {
			  if(grade<0||grade>100)
		     	{
				 
			    	printf("请重新输入一个（0~100）的成绩整数!！\n");
				    continue;
		        	}
			else if(grade<60)
			
				printf("成绩不及格！\n");
			
			else if(grade>=60&&grade<70)                  //if 与else 的使用不用“{}”，
			                                              //如果每个分支都这样弄的话可能只有最近的一个值 
			
				printf("成绩及格且中等！\n");
			
			else if(grade>=70&&grade<80)
			
				printf("成绩良好！\n");
		   else if(grade>80&&grade<=100)
			
				printf("成绩优秀！\n");
		}
		    else if(t=='S'||t=='s')
		    
		   {//printf("%d对应的成绩等级为%c\n",grade,n); 
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
			   //printf("%d对应的成绩等级为%c\n",grade,n);
			   default :printf("请重新输入一个（0~100）的成绩整数!\n");break;}
				  printf("%d对应的成绩等级为%c\n",grade,n);
				  break;	
				  return 0;}
	}}}
