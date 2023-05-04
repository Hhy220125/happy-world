#include<stdio.h>
int main()
{
	int a=1,b=2,i,j,n;
	float s=0.0;
	printf("程序功能：计算s=1/2+2/3+3/5+5/8+8/13+13/21......\n");
	printf("请输入要求和的项数：");
	scanf("%d",&n);
      	if(n<=0)
 
		printf("项数无效，请重新输入！\n");
	   
        else
    
			for(i=1;i<=n;i=i+1)
    {
			{
    		
         //	else 
           	
			s=s+1.0*a/b;
		j=a;
		a=b;
		b=b+j;
		printf("第%d项:%d/%d\n",i,j,a);
    	}
	   printf("前%d项之和为:%f",n,s);}
}
