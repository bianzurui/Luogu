
#include <stdio.h>

int main()
{
    double s,x;
    double sum=0.0,v=7.0;

    scanf("%lf %lf",&s,&x);

    while(sum<s-x)
    {
        sum=sum+v;
        v=v*0.98;
    }

    sum=sum+v;

    if(sum>s+x)
    {
        printf("n\n");
    }
    else
    {
        printf("y\n");
    }

    return 0;
}
