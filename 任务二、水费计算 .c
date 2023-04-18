#include<stdio.h>
#include<math.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	//y=(4.0/3)*x;
	//y=2.5*x-10.5;
	if(x<0)
	{
	    y=0;}
	else if(x>=0 && x<=15)
	{
	y=(4.0/3)*x;}
	else
	{
	  y=2.5*x-10.5;}
	  printf("%4.2f",y);
	return 0;
}
