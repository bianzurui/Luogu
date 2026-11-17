#include<stdio.h>
int main()
{
    int x,n,m,p,q,k,a,b;
    scanf("%d %d",&x,&n);
    if(x<6)
    {
        m=7-x+1;
        if(n<=m)
        {
            printf("%d\n",(5-x+1)*250);
        }
        else
        {
            p=(5-x+1)*250;
            q=n-m;
            k=q/7;
            a=q%7;
            if(a<6)
            {
                b=p+k*250*5+a*250;
            }
            else
            {
                b=p+k*250*5+5*250;
            }
            printf("%d\n",b);
        }
    }
    else
    {
        m=n-7+x-1;
        k=m/7;
        a=m%7;
         if(a<6)
            {
                b=k*250*5+a*250;
            }
            else
            {
                b=k*250*5+5*250;
            }
            printf("%d\n",b);
    }
    return 0;
}