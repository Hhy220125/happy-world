#include<stdio.h>
int main()
{
	double a,b,sum=0;
	printf("�����빫������",a);
	scanf("%lf",&a);
	printf("·�ϵ���ʱ�䣺",b);
	
	scanf("%lf",&b);
	if(a>0 && a<=3)
	{
		sum=10;
	}
	
	    else if(a<10||a==10)
	  {
		  sum=10+(a-3)*2;
	  }
	  else if(a>10)
	  {
	  	sum =24+(a-10)*3;
	  }
	  int extra;
	  extra =b/5;
	  sum=sum+2*extra;
	  int d;
	  d=(int)(sum+0.5);
	  printf("%d",d);
	  return 0;
	
}
