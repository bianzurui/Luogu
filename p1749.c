#include<stdio.h>
int main()
{
    int t;
    long long n,k,sum;

    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&k);

        sum=k*(k+1)/2;

        if(sum<=n)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}