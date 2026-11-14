#include<stdio.h>
int main()
{
    int n,k,j,sum=0,num=0;
    scanf("%d",&n);

    while(sum<n*n && scanf("%d",&k)==1)
    {
        for(j=0;j<k;j++)
        {
            printf("%d",num);
            sum++;

            if(sum%n==0)
            {
                printf("\n");
            }
        }
        num=1-num;
    }

    return 0;
}
