#include<stdio.h>
int main()
{
	int a=1,b=2,i,j,n;
	float s=0.0;
	printf("�����ܣ�����s=1/2+2/3+3/5+5/8+8/13+13/21......\n");
	printf("������Ҫ��͵�������");
	scanf("%d",&n);
      	if(n<=0)
 
		printf("������Ч�����������룡\n");
	   
        else
    
			for(i=1;i<=n;i=i+1)
    {
			{
    		
         //	else 
           	
			s=s+1.0*a/b;
		j=a;
		a=b;
		b=b+j;
		printf("��%d��:%d/%d\n",i,j,a);
    	}
	   printf("ǰ%d��֮��Ϊ:%f",n,s);}
}
