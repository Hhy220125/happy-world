#include<stdio.h>
#define N 6
int main()
{
	int i,j,a[N]={8 ,6 ,9 ,3 ,2 ,7},temp;
	for(i=0;i<N;i++)
	{ int min =i;
	      for(j=i+1;j<N;j++)
	      if(a[min]>a[j])
	      min=j;
	      if(min!=i)
	      {  temp=a[min];
	      a[min]=a[i];
	      a[i]=temp;
	      
		  }
	}
	printf("ÅÅÐò½á¹ûÎª£º\n");
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
	return 0;
 } 
