#include<stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&a==c)
	  {
	    printf("Three numbers are equal\n");
		}
	    else if(a==b&&a>c)
		{
	    	printf("a and b are the largest number \n",a);}
	    	else if(a==c&&a>b)
			{
	    printf("a and c are the largest number \n",a );
			}
			
		else if(b==c&&b>a){
			printf("b and c are the largest number \n",b );
		}
	   else if(a>b&&a>c){
	   	printf("a=%d is the largest number\n",a);
	   }
	   else if(b>a&&b>c){
	   	printf("b=%d is the largest number\n ",b);
	   }
	   else 
	   {
	   		printf("c=%d is the largest number\n ",c);
	   }
	return 0;
}
