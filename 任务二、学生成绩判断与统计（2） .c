#include<stdio.h>
#define COUNT 3                                           //������ų����Ա�ʾҪ�����ѧ������ 
void main()
{
//	char  k,name=0;
	int cj[COUNT];                                           //��������cj[COUNT]�Դ��COUNT��ѧ���ĳɼ� 
	int i,count = 0;                                          //���������count��ͳ�Ƹ���ƽ���ɼ������� 
	float ave = 0;
	                                                          //����COUNT��ѧ���ɼ���ŵ�����cj,�����ܳɼ� 
	for(i=1;i<=COUNT;i++)
	{   printf("����%d��ѧ����\n",i);
	    printf("      ѧ��:%d\n",i);
		printf("      �ɼ�:",i+1);
		scanf("%d",&cj[i]);
		ave=ave+cj[i];                                           //�ۼ�ÿһ���ɼ� 
	}
	                                                          //printf("%d��ѧ�����ܳɼ���%f\n",COUNT,ave);
	 ave = ave/COUNT;                                             //����ƽ���ɼ� 
	                                                        // printf("%d��ѧ����ƽ���ɼ�:%f\n",COUNT,ave);
	                                                       //�������ƽ���ɼ���ѧ���ɼ������� 
	  printf("������ƽ���ֵ�ѧ����\n");
	  printf("ѧ��     �ɼ�\n");
	for(i=1;i<=COUNT;i++)                                    //��ν�ѧ�ű������������棿 
	 if(cj[i]>ave)
	 {
	 	count++;
	                                                      //	printf("������ƽ���ֵ�ѧ����\n");
	                                                     //	printf("ѧ��     �ɼ�\n");
	 	printf("%d        %d\n",count,cj[i]);
	 }
	 printf("��%d��",count);
	 //���ü�return 0; 
	
}
