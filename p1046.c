#include<stdio.h>
int main()
{
    int a[10],i,k,cnt=0;
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<10;i++)
    {
    if(k+30>=a[i])
    {
        cnt=cnt+1;
    }
    }
    printf("%d\n",cnt);
    return 0;
}