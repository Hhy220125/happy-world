#include<stdio.h>
int main ()
{
	int a[]={2,3,5,4},i;
	for(i=0;i<4;i++)
	  switch(i%2)
	  {
	  	case 0:switch(a[i]%2)
	        	{case 0:a[i]++;break;
	    	     case 1:a[i]--;break;
	  	        }break;
	  	case 1:a[i]=0; 
	    
	  }
	  for(i=0;i<4;i++)
	  printf("%d\n",a[i]);
	  printf("\n");
}
