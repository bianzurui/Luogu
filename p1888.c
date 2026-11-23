#include<stdio.h>
int main()
{
    int a,b,c,max,min,tmp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    else
    {
        max=max;
    }
    if(a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    if(min>c)
    {
        min=c;
    }
    else
    {
        min=min;
    }
    int p,q;
    p=min;
    q=max;
    while(q!=0)
    {
        tmp=p%q;
        p=q;
        q=tmp;       
    }
    int x,y;
    x=min/p;
    y=max/p;
    printf("%d",x);
    printf("/");
    printf("%d\n",y);
    return 0;
}