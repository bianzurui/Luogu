#include<stdio.h>

int main()
{
    long long x1,x2,y1,y2;
    long long a,b,c,d;

    scanf("%lld %lld %lld %lld",&x1,&x2,&y1,&y2);

    a=x1*y1;
    b=x1*y2;
    c=x2*y1;
    d=x2*y2;

    if(a<-2147483648LL || a>2147483647LL ||
       b<-2147483648LL || b>2147483647LL ||
       c<-2147483648LL || c>2147483647LL ||
       d<-2147483648LL || d>2147483647LL)    
    {
        printf("long long int\n");
    }
    else
    {
        printf("int\n");
    }

    return 0;
}