#include <stdio.h>

int main()
{
    int a , b , c;
    char t;

    printf("程序功能：计算两个整数之和或差\n\n");
    printf("请选择计算类型(A-加法,S-减法): ");
    
    while(1)
    {
    	scanf("%c",&t);
			
    if (t == 'A'||t=='S')
	 {
    	printf("整数: a=",a);
        scanf(" %d", &a); 
    	printf("整数: b= ",b);
        scanf("%d", &b);  
        if(t=='A')
        {
        	printf("a+b=%d",a+b);
        	break;
        	
		}
		else if(t=='S')
		{
			printf("a-b=%d",a-b);
			break;
			
		}
		} 
		else
		{
		
        printf("请重新选择！请重新选择！\n");
        } }
        return 0;
      
	  
	  
	  }

    

