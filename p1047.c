
#include <stdio.h>

int main()
{
    int l, m;
    int a[10001];
    int u, v;
    int i, j;
    int count = 0;

    scanf("%d %d", &l, &m);

    for(i = 0; i <= l; i++)
    {
        a[i] = 1;
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);

        for(j = u; j <= v; j++)
        {
            a[j] = 0;
        }
    }

    for(i = 0; i <= l; i++)
    {
        if(a[i] == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
