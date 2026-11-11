#include<stdio.h>

int main()
{
    int a,i=0,j,b[100];
    int flag=0;

    scanf("%d",&a);

    if(a<0)
    {
        printf("-");
        a=-a;
    }

    if(a==0)
    {
        printf("0");
    }
    else
    {
        while(a>0)
        {
            b[i]=a%10;
            a=a/10;
            i++;
        }

        for(j=0;j<i;j++)
        {
            if(b[j]!=0)
            {
                flag=1;
            }

            if(flag==1)
            {
                printf("%d",b[j]);
            }
        }
    }

    return 0;
}