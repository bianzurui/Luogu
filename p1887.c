#include<stdio.h>
int main()
{
    int m,n,tmp,a,b;
    scanf("%d %d",&n,&m);
    if(n%m==0)
    {
        tmp=n/m;
        for(int i=0;i<m;i++)
        {
            printf("%d ",tmp);
        }
    }
    else
    {
        a=n%m;
        b=n/m;
        for(int i=0;i<m-a;i++)
        {
            printf("%d ",b);
        }
        for(int i=0;i<a;i++)
        {
            printf("%d ",b+1);
        }
    }
    printf("\n");
    return 0;
}