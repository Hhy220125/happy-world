#include<stdio.h>
int main()
    {
	int n,t;
	int a[5]={34,5,756,65,6};
    n=5;
    for(int i=0;i<4;i++)
    {int k=i;
       for(int j = i+1;j<5;j++)
       {if(a[j]<a[k])
           k=j;
	   }
	    if(k!=i)
	    {
	    	t=a[i];
	    	a[i]=a[k];
	    	a[k]=t;
		}
	}
	for(int i=0;i<5;i++)
	{
	printf("%d\t",a[i]);}
	return 0;
}
