#include<stdio.h>
int main()
{
    int m,n,x,y,p,q,i,a[10000],sum=0,t=0;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n&&i<=m;i++)
    {
        x=m-i+1;
        y=n-i+1;
        a[i]=x*y;
        sum=sum+a[i];
    }
    printf("%d ",sum);
    for(i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            p=m-i+1;
            q=n-j+1;
            t=t+p*q;
        }
    }
    printf("%d\n",t-sum);
    return 0;
}