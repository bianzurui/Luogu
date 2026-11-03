#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[1005],v[1005]={0},i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        d=abs(a[i]-a[i-1]);
        if(d>0 && d<n) v[d]=1;
    }
    for(i=1;i<n;i++)
        if(!v[i]){printf("Not jolly");return 0;}
    printf("Jolly");
    return 0;
}
