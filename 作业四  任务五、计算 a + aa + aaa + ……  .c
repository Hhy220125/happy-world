#include<stdio.h>
#include<math.h>
int main()
{
	printf("�����ܣ���a+aa+aaa+......\n\n");
	int n;
	double a,prev_sum, total_sum;
	printf("ѭ������:");	
	scanf("%lf",&a);
	printf("ѭ������:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{// int i;
	  prev_sum += a*pow(10,i);
	  total_sum += prev_sum;}
	  	printf("������:%lf\n",total_sum);
	 return 0;
	
}
