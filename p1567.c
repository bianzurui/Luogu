#include<stdio.h>
int main()
{
    int n,a[1000005],sum[1000005]={0},tmp;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            sum[i]=sum[i-1]+1;
        }
        else
        {
            sum[i]=0;
        }
    }

    tmp=sum[0];

    for(int j=1;j<n;j++)
    {
        if(sum[j]>tmp)
        {
            tmp=sum[j];
        }
    }

    printf("%d\n",tmp+1);

    return 0;
}
