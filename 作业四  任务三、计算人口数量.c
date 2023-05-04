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
               
        } printf("%d年后,人数为:%.2f亿\n", i, h);
                return 0;
}	
