#include <stdio.h>

int main()
{
    int a , b , c;
    char t;

    printf("�����ܣ�������������֮�ͻ��\n\n");
    printf("��ѡ���������(A-�ӷ�,S-����): ");
    
    while(1)
    {
    	scanf("%c",&t);
			
    if (t == 'A'||t=='S')
	 {
    	printf("����: a=",a);
        scanf(" %d", &a); 
    	printf("����: b= ",b);
        scanf("%d", &b);  
        if(t=='A')
        {
        	printf("a+b=%d",a+b);
        	break;
        	
		}
		else if(t=='S')
		{
			printf("a-b=%d",a-b);
			break;
			
		}
		} 
		else
		{
		
        printf("������ѡ��������ѡ��\n");
        } }
        return 0;
      
	  
	  
	  }

    

