#include<stdio.h>
int main()
{
    int m,n,i,x,y,a[10000],b[10]={0};
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        a[i]=i;
        while(a[i]!=0)
        {
            x=a[i]%10;
            b[x]++;
            a[i]=a[i]/10;
        }
    }
    for(int j=0;j<10;j++)
    {
        printf("%d ",b[j]);
    }
    printf("\n");
    return 0;
}