#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(d>b)
    {
        x=c-a;
        y=d-b;
        printf("%d %d\n",x,y);
    }
    else
    {
        x=c-a-1;
        y=60-b+d;
        printf("%d %d\n",x,y);
    }
    return 0;
}