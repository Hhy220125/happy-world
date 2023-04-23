#include<stdio.h>
int main()
{    int n=5,i,j;
     int a[5]={67,97,43,12,765};
	int left =0;
	int right =n -1;
	while(left<right)
	{
		int min=left;
		int max=right;
		for(int i=left;i<=right;i++)
		{if(a[i]<a[min])
		min=i;
		 if(a[i]>a[max])
        max=i;		}
        int temp;
		temp= a[max];
		a[max]=a[right];
		a[right]=temp;
		 if(min==right)
		 min=max;
		 temp=a[min];
		 a[min]=a[left];
		 a[left]=temp;
		 left++;
		 right--;	}
		 for( i = 0; i < n; i++)
          {printf("%d ",a[i]); } 
          return 0;}
