#include<stdio.h>
int main()
{
    int l,r,i,j,sum=0;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {   
        j=i;
        while(j!=0)
        {
            if(j%10==2)
            {
                sum=sum+1;
            }
            j=j/10;
        }
    }
    printf("%d\n",sum);
    return 0;
}