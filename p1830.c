#include<stdio.h>
int main()
{
    int n,m,x,y,i,a[1000],b[1000],c[1000],d[1000],k[1000],t[1000],p[1000]={0},q[1000];
    scanf("%d %d %d %d",&n,&m,&x,&y);
    for(i=0;i<x;i++)
    {
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
    }
    for(i=0;i<y;i++)
    {
        scanf("%d %d",&k[i],&t[i]);
    }
    for(i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        if(k[j]>=a[i] && k[j]<=c[i] && t[j]>=b[i] && t[j]<=d[i])
        {
            p[j]=p[j]+1;
            q[j]=i+1;
        }
    }
     for(i=0;i<y;i++)
     {
        if(p[i]!=0)
        {
            printf("Y %d %d\n",p[i],q[i]);
        }
        else
        {
            printf("N\n");
        }
     }
     return 0;
}