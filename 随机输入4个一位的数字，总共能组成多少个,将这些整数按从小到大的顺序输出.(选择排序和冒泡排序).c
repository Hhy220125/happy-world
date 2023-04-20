#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int c, a[2],t=0,e,i;
    float b = 0;
    int count = 0;
    srand(time(NULL)); // 初始化随机数生成器
    int k = 0;
    // 生成四个随机一位数字
    for (e = 0; e < 5+t; e++)
    {

        for (i = 0; i < 2; i++)
        {
            a[i] = rand() % 10;
        }
        c = rand() % 4 + 1; // 生成0-9之间的随机数字
        switch(c)
        {
        case 1:
            printf("%-5d+%5d     =", a[1], a[0]);
            scanf("%f", &b);
            if (b == a[1] + a[0])
            {
                k++;
            }

            break;
        case 2:
            printf("%-5d-%5d     =", a[1], a[0]);
            scanf("%f", &b);
            if (b == a[1] - a[0])
            {
                k++;
            }
            break;
        case 3:
            if (a[0] == 0)
            {
                printf("分母为0\n");
                t++;
                break;
            }
            else
            {
                printf("%-5d/%5d     =", a[1], a[0]);
                scanf("%f", &b);
                int ans = a[1] /a[0] * 100;
                int m = (int)b*100;
                if (m == ans)
                {
                    k++;
                }
                break;
            }
        case 4:
            printf("%-5d*%5d     =", a[1], a[0]);
            scanf("%f", &b);
            if (b == a[1] * a[0])
            {
                k++;
            }
            break;
        }
    }
    printf("\n答对：%d\n成绩：%d" ,k,  k*20);
}
