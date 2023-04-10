#include<stdio.h>
#include<math.h>
int main()
{
	int age=29;
	if(age<=18)
	printf("未成年\n");
	else {
	
	if(age>=18 && age<=28)
	printf("青年人\n");
	else if(age>=28 && age<=58)
	printf("中年人\n");
	else  if(age>=58 && age<=70)
	printf("中老年人\n");
	else 
	printf("老年人\n");}
	return 0;
 } 
