#include<stdio.h>
int main()
{
    int n,light[2000000],i,x,t[10000];
    double a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %d",&a[i],&t[i]);
        for(int j=1;j<=t[i];j++)
        {
            x=(int)(a[i]*j);
            light[x]=!light[x];
        }
    }
     for(i=1;i<=2000000;i++)
    {
        if(light[i]==1)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;


}