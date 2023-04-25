#include<stdio.h>
void main()
{ int temp,i,j,n;
  short a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  printf("转置前的方阵A:\n");
  for(i=0;i<4;i++)
  {
  	for (j=0;j<4;j++)
  	{printf("%4d",a[i][j]);
  		  }
  		  printf("\n");
   } 
    printf("转置后的方阵A:\n");
    for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		if(i<=j)
    		{
    			temp=a[i][j];
    			a[i][j]=a[j][i];
    			a[j][i]=temp;
			}
			printf("%4d",a[i][j]);
			}
			printf("\n");
	 } 
   
}
