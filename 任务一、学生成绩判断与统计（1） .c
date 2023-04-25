#include<stdio.h>
#define COUNT 5          //定义符号常量以表示要处理的学生人数 
void main()
{
	int cj[COUNT];       //定义数组cj[COUNT]以存放COUNT个学生的成绩 
	int i,count = 0;     //定义计数器count以统计高于平均成绩的人数 
	float ave = 0;
	//输入COUNT个学生成绩存放的数组cj,并求总成绩 
	for(i=0;i<COUNT;i++)
	{
		printf("第%d个学生的成绩:",i+1);
		scanf("%d",&cj[i]);
		ave=ave+cj[i];     //累加每一个成绩 
	}
	     printf("%d个学生的总成绩：%f\n",COUNT,ave);
	ave = ave/COUNT;       //计算平均成绩 
	     printf("%d个学生的平均成绩:%f\n",COUNT,ave);
	     //输出高于平均成绩的学生成绩并计数 
	for(i=0;i<COUNT;i++)
	 if(cj[i]>ave)
	 {
	 	count++;
	 	printf("高于平均值的分数：%d\n",cj[i]);
	 }
	 printf("高于平均成绩的学生人数：%d\n",count);
	 //不用加return 0; 
	
}
