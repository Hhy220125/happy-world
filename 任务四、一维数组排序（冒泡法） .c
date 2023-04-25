#include<stdio.h>

int main()
{
	
	int arr[10];
	//int length=0;
  int i,j;
//	int flag=1;
	printf("Input 10 numbers:\n");
	
	for( i=0;i<10;i++)
	{  scanf("%d",&arr[i]);
	}
	for( i=0;i<10-1;i++)
	{
	   for (j=0;j<10-i-1;j++)
	   {
	   if(arr[j]>arr[j+1])
	     {int temp;
		    temp =arr[j];
	          arr[j]=arr[j+1];
	          arr[j+1]=temp;
	          
	   }
	   }
	}
	printf("The sorted numbers:\n"); 
	for( i=0;i<10;i++)
	{
	printf("%d ",arr[i]);
}return 0;

}
