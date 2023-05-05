#include <stdio.h>
int main()
{
    int grade;
    printf("请输入你的成绩:");
    scanf("%d",&grade);
    if(grade<0||grade>100)
    {
        printf("请重新输入!");
    }
    else
    {
        switch(grade/10)
        {
            case 10:
            case 9:printf("A类");
            break;
            case 8:printf("B类");
            break;
            case 7:printf("C类");
            break;
            case 6:printf("D类");
            break;
            default: printf("E类");
            break;
        }
    }
    //printf("请输入等级");
    return 0;
}
