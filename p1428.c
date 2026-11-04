#include<stdio.h>
int main()
{
    int n,a[10000],i,j,sum[10000],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        sum[i]=0;
        sum[0]=0;
        for(j=i;j>=1;j--)
        {
            if(a[j]>a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                sum[i]+=1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",sum[i]);
    }
    printf("\n");
    return 0;
}