#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=n;;i++)
    {
        int sum=0,tmp=0;
        a=i;
        for(int j=1;j<a;j++)
        {
            if(a%j==0)
            {
                sum=sum+j;
            }
        }
        for(int k=1;k<sum;k++)
        {
            if(sum%k==0)
            {
                tmp=tmp+k;
            }

        }
        if(tmp==a && sum!=a)
        {
            printf("%d %d\n",a,sum);
            break;
        }
    }
    return 0;
}