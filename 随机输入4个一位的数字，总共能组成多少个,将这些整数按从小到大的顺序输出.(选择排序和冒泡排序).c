#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int c, a[2],t=0,e,i;
    float b = 0;
    int count = 0;
    srand(time(NULL)); // ��ʼ�������������
    int k = 0;
    // �����ĸ����һλ����
    for (e = 0; e < 5+t; e++)
    {

        for (i = 0; i < 2; i++)
        {
            a[i] = rand() % 10;
        }
        c = rand() % 4 + 1; // ����0-9֮����������
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
                printf("��ĸΪ0\n");
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
    printf("\n��ԣ�%d\n�ɼ���%d" ,k,  k*20);
}
