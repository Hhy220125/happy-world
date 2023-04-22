#include<stdio.h>

int main()
{
	
	int arr[6];
	//int length=0;
  int i,j;
//	int flag=1;
	printf("请输入数组值：");
	
	for( i=0;i<6;i++)
	{  scanf("%d",&arr[i]);
	}
	for( i=0;i<6-1;i++)
	{
	   for (j=0;j<6-i-1;j++)
	   {
	   if(arr[j]>arr[j+1])
	     {int temp;
		    temp =arr[j];
	          arr[j]=arr[j+1];
	          arr[j+1]=temp;
	          
	   }
	   }
	}
	printf("排序好的数组为："); 
	for( i=0;i<6;i++)
	{
	printf("%d ",arr[i]);
}return 0;

}
