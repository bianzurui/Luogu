#include<stdio.h>
int main()
{
    int n,a[3],b[3],i,t[3],min=0;
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(n%a[i]==0)
        {
            t[i]=(n/a[i])*b[i];
        }
        else
        {
            t[i]=(n/a[i]+1)*b[i];
        }
    }
    min=t[0];
    for(i=1;i<3;i++)
    {
        if(t[i]<min)
        {
            min=t[i];
        }
    }
    printf("%d\n",min);
    return 0;
}