#include<stdio.h>
#include<math.h>
int main()
{
        int  i;
        double h, rate = 0.008,t ;
        h=13.74;
        
        for (i=1;1>0;i++) 
		{      t=h;
		      h=t*(1+rate);
		      if(h>20)
			  
			  break;  
               // number = m * pow((1 + rate), i++);
               
        } printf("%d���,����Ϊ:%.2f��\n", i, h);
                return 0;
}	
