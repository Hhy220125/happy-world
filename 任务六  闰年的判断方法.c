#include <stdio.h>
int main()
{   int y;
   for(y=2001;y<=2100;y++)
  {   if(y%4==0&&y%100!=0|| y%400 ==0)
        printf("%d\n",y);
       else
       continue;
        //printf("%d²»ÊÇÈòÄê\n",y);
        }
   return 0; 
} 
