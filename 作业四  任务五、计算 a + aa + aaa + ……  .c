#include<stdio.h>
#include<math.h>
int main()
{
	printf("程序功能：求a+aa+aaa+......\n\n");
	int n;
	double a,prev_sum, total_sum;
	printf("循环数字:");	
	scanf("%lf",&a);
	printf("循环次数:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{// int i;
	  prev_sum += a*pow(10,i);
	  total_sum += prev_sum;}
	  	printf("计算结果:%lf\n",total_sum);
	 return 0;
	
}
