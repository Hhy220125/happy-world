#include<stdio.h>
#include<math.h>
int main ()
{
	#define pi 3.14
	float r=1.5, c,s1,s2,v1,v2;
	int h=3;
	printf("圆的半径：r=%f\n",r);
	printf("圆柱的高：h=%d\n",h);
	c=2*pi*r;
	s1=pi*r*r;
	s2=4*pi*r*r;
	v1=4.0/3.0*pi*r*r*r; 
	v2=s1*h;
	printf("圆周长:c=%6.2f\n",c);
	printf("圆面积:s1=%6.2f\n",s1);
	printf("圆球表面积:s2=%6.2f\n",s2);
	printf("圆球体积:v1=%6.2f\n",v1);
	printf("圆柱体积:v2=%6.2f\n",v2);
	return 0;
}
