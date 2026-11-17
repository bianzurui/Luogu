#include<stdio.h>
int main()
{
    int n,i,a[1000],sum=1,max=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1]+1)
        {
            sum=sum+1;
        }
        else
        {
            sum=1;
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d\n",max);
    return 0;
}