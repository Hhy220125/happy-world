#include <stdio.h>
int main()
{
    int grade;
    printf("��������ĳɼ�:");
    scanf("%d",&grade);
    if(grade<0||grade>100)
    {
        printf("����������!");
    }
    else
    {
        switch(grade/10)
        {
            case 10:
            case 9:printf("A��");
            break;
            case 8:printf("B��");
            break;
            case 7:printf("C��");
            break;
            case 6:printf("D��");
            break;
            default: printf("E��");
            break;
        }
    }
    //printf("������ȼ�");
    return 0;
}
