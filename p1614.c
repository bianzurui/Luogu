#include<stdio.h>
int main()
{
    int n,m,a[10000],i,j,sum[10000],min;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<m;j++)
        {
            sum[i]=sum[i]+a[i+j];
        }
    }
    min=sum[0];
    for(i=1;i<n-m;i++)
    {
        if(sum[i]<min)
        {
            min=sum[i];
        }
        else
        {
            min=min;
        }
    }
    printf("%d\n",min);
    return 0;
}