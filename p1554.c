#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,x,y,s,t1,t2;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    s=abs(b-a);
    t1=abs(a-x)+abs(b-y);
    t2=abs(a-y)+abs(b-x);
    if(s<=t1 && s<=t2)
    {
        printf("%d\n",s);
    }
    else if(t1<=s && t1<=t2)
    {
        printf("%d\n",t1);
    }
    else
    {
        printf("%d\n",t2);
    }
    return 0;
}