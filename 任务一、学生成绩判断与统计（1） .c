#include<stdio.h>
#define COUNT 5          //������ų����Ա�ʾҪ�����ѧ������ 
void main()
{
	int cj[COUNT];       //��������cj[COUNT]�Դ��COUNT��ѧ���ĳɼ� 
	int i,count = 0;     //���������count��ͳ�Ƹ���ƽ���ɼ������� 
	float ave = 0;
	//����COUNT��ѧ���ɼ���ŵ�����cj,�����ܳɼ� 
	for(i=0;i<COUNT;i++)
	{
		printf("��%d��ѧ���ĳɼ�:",i+1);
		scanf("%d",&cj[i]);
		ave=ave+cj[i];     //�ۼ�ÿһ���ɼ� 
	}
	     printf("%d��ѧ�����ܳɼ���%f\n",COUNT,ave);
	ave = ave/COUNT;       //����ƽ���ɼ� 
	     printf("%d��ѧ����ƽ���ɼ�:%f\n",COUNT,ave);
	     //�������ƽ���ɼ���ѧ���ɼ������� 
	for(i=0;i<COUNT;i++)
	 if(cj[i]>ave)
	 {
	 	count++;
	 	printf("����ƽ��ֵ�ķ�����%d\n",cj[i]);
	 }
	 printf("����ƽ���ɼ���ѧ��������%d\n",count);
	 //���ü�return 0; 
	
}
