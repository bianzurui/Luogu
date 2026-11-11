
#include <stdio.h>

int main()
{
    char a[7], b[7];
    int sum1 = 1, sum2 = 1;

    scanf("%s", a);
    scanf("%s", b);

    for (int i = 0; a[i] != '\0'; i++)
    {
        sum1 = sum1 * (a[i] - 'A' + 1) % 47;
    }

    for (int i = 0; b[i] != '\0'; i++)
    {
        sum2 = sum2 * (b[i] - 'A' + 1) % 47;
    }

    if (sum1 == sum2)
    {
        printf("GO\n");
    }
    else
    {
        printf("STAY\n");
    }

    return 0;
}
