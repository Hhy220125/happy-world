#include<stdio.h>
#include<math.h>
 void main()
 {  
    int a=3,b=4,c=5;
    float x=1.2,y=2.4,z=-3.6;
    char c1='a',c2='A';
    long m=51274 ,n=128765;
    //scanf("%c",&c1);
   // scanf("%c",&c2);
    
    printf("a= %d,b= %d,c= %d\n",a,b,c);
	printf("x=%f,y=%f,z=%f\n",x,y,z);
	printf("x+y=%6.2f  y+z=%6.2f  z+x=%6.2f\n ",x+y,y+z,z+x);
	printf("m=%ld,n=%ld\n",m,n);
	printf("c1='%c' or c1=%d(ASCII)\n",c1,c1);
	printf("c1='%c' or c1=%d(ASCII)\n",c2,c2);
	printf("c1-c2=%d\n",c1-c2);
    system("pause");
	
	}
 
