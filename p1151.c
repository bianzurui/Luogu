#include<stdio.h>
int main()
{
    int k,i,sum=0,a[20001],m[20001],n[20001],p[20001];
    scanf("%d",&k);
    a[0]=10000;
    for(i=1;i<=20000;i++)
    {
        a[i]=a[i-1]+1;
    }
    for(i=0;i<=20000;i++)
    {
        m[i]=a[i]/100;
        n[i]=(a[i]-(a[i]/10000)*10000)/10;
        p[i]=a[i]%1000;
        if(m[i]%k==0 && n[i]%k==0 && p[i]%k==0)
        {
            printf("%d\n",a[i]);
            sum=sum+1;
        } 
    }
    if(sum==0)
    {
        printf("No\n");
    }  
    return 0;
}