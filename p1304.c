#include<stdio.h>

int main()
{
    int n,i,a,b,j,k;
    int flag1,flag2;

    scanf("%d",&n);

    for(i=4; i<n+1; i=i+2)
    {
        for(a=2; a<i; a++)
        {
            b=i-a;

            flag1=1;
            flag2=1;

            for(j=2; j<a; j++)
            {
                if(a%j==0)
                {
                    flag1=0;
                    break;
                }
            }

            for(k=2; k<b; k++)
            {
                if(b%k==0)
                {
                    flag2=0;
                    break;
                }
            }

            if(flag1==1 && flag2==1)
            {
                printf("%d=%d+%d\n",i,a,b);
                break;
            }
        }
    }

    return 0;
}