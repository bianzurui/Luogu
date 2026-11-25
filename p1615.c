#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,n;
    scanf("%d:%d:%d",&a,&b,&c);
    scanf("%d:%d:%d",&d,&e,&f);
    scanf("%d",&n);
    long long x,y;
    x=a*3600+b*60+c;
    y=d*3600+e*60+f;
    long long s=y-x;
    long long sum=s*n;
    printf("%lld\n",sum);
    return 0;
}