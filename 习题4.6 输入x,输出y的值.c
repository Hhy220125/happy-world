#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;

	printf("������x��ֵ��");
	scanf("%d",&x);
	if(x<1)
	 
	 y=x;
	 else if (x>=1&&x<10)
	 
	 y=2*x-1;
	else  if (x>=10)
	  y=3*x-11;
	  
	  printf("y��Ӧ��ֵΪy=%d\n",y);
	  
	  return 0;
	   
}
