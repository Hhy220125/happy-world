#include<stdio.h>
int main()
{
  int n=5,i,j;
  int left = 0, right = n - 1;
  int a[5]={2387,43,6,78656,98};                   //Ϊʲô���н��������ʾ���⼸�������� 
    //for(i =left; i <= right; i++)               //�����scanf����Ū�������Ϳ���ʹ���� 
  //{
  
 // scanf("%d",&a[i]);}
  
//int left = 0, right = n - 1;
while (left < right)
 {//int i,j;
      for ( i = left; i < right; i++)
	    {
       if (a[i] > a[i + 1]) {
        int  temp;
         temp = a[i];
       a[i] = a[i + 1];
        a[i + 1] = temp;
        }
          }
        right--;
       for ( j = right; j > left; j--) {
      if (a[j] < a[j - 1]) {
    int temp;
     temp = a[j];
    a[j] = a[j - 1];
    a[j - 1] = temp;
    }
   }
   left++;
   }
   for( i = 0; i < n; i++)
   {printf("%d ",a[i]);
   } 
   return 0;
   }
