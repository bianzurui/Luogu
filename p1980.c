#include<stdio.h>
int main()
{
    int sum=0,x,y,p,q;
    scanf("%d %d",&x,&y);
    for(int j=1;j<=x;j++)
    {
        p=j;
        while(p!=0)
        {
            q=p%10;
            p=p/10;
            if(q==y)
            {
                sum=sum+1;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}