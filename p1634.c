#include<stdio.h>
int main()
{
    long long x,n,sum=1;
    scanf("%lld %lld",&x,&n);
    for(int i=0;i<n;i++)
    {
        sum=x*sum+sum;
    }
    printf("%lld\n",sum);
    return 0;
}