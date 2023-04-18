#include<stdio.h>
int main()
{
   float income,pay,tax=0;
   printf("请输入个人收入总额:",income);
   scanf("%f",&income);
   pay=income-3500;
   if(pay>=0 &&pay<1500)
   {
   tax=pay*0.03;}
        else if(pay>=1500 && pay<4500)
        {
   	      tax=pay*0.1-105;
		     } 
		     else if(pay>=4500 && pay<9000)
   {
   	tax=pay*0.2-555;
		  }
		   else if(pay>=9000 && pay<35000)
   {
   	tax=pay*0.25-1005;
		  } 
		  else if(pay>=35000 && pay<55000)
   {
   	tax=pay*0.3-2755;
		  } 
		  else if(pay>=55000 && pay<80000)
   {
   	tax=pay*0.35-5505;
		  } 
			 else if(pay>=80000)
   {
   	tax=pay*0.45-13505;
		  } 
		  else
		  printf("NOT TAX!\n");
		  printf("全月应缴纳所得额：%7.2f\n",tax);
		  return 0;
		   
 	
}
