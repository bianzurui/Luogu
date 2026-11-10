
#include <stdio.h>

int main()
{
    int a[12];
    int i, s = 0, sum = 0, tmp;
    
    for(i = 0; i < 12; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 12; i++)
    {
        s = s + 300 - a[i];

        if(s < 0)
        {
            printf("-%d", i + 1);
            return 0;
        }

        tmp = s / 100;
        sum = sum + tmp * 100;
        s = s - tmp * 100;
    }

    printf("%.0f", sum * 1.2 + s);

    return 0;
}
