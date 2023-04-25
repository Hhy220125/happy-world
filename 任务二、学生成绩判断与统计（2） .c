#include<stdio.h>
#define COUNT 3                                           //定义符号常量以表示要处理的学生人数 
void main()
{
//	char  k,name=0;
	int cj[COUNT];                                           //定义数组cj[COUNT]以存放COUNT个学生的成绩 
	int i,count = 0;                                          //定义计数器count以统计高于平均成绩的人数 
	float ave = 0;
	                                                          //输入COUNT个学生成绩存放的数组cj,并求总成绩 
	for(i=1;i<=COUNT;i++)
	{   printf("【第%d个学生】\n",i);
	    printf("      学号:%d\n",i);
		printf("      成绩:",i+1);
		scanf("%d",&cj[i]);
		ave=ave+cj[i];                                           //累加每一个成绩 
	}
	                                                          //printf("%d个学生的总成绩：%f\n",COUNT,ave);
	 ave = ave/COUNT;                                             //计算平均成绩 
	                                                        // printf("%d个学生的平均成绩:%f\n",COUNT,ave);
	                                                       //输出高于平均成绩的学生成绩并计数 
	  printf("【高于平均分的学生】\n");
	  printf("学号     成绩\n");
	for(i=1;i<=COUNT;i++)                                    //如何将学号保存在数组里面？ 
	 if(cj[i]>ave)
	 {
	 	count++;
	                                                      //	printf("【高于平均分的学生】\n");
	                                                     //	printf("学号     成绩\n");
	 	printf("%d        %d\n",count,cj[i]);
	 }
	 printf("共%d人",count);
	 //不用加return 0; 
	
}
