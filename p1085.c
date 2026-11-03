#include<stdio.h>
int main()
{
    int a[7],b[7],i,sum[7],k=0,temp=8,s;
    for(i=0;i<7;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<7;i++)
    {
    sum[i]=a[i]+b[i];
        if(sum[i]>8)
        {
            if(sum[i]>temp)
            {
            temp=sum[i];
            k=k+1;
            s=i+1;
            }
        }
    }
    if(k==0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n",s);
    }
    return 0;
}