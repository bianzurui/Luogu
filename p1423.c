#include<stdio.h>
int main()
{
    double s,x[10000],sum=0;
    int t=0,i=0;
    scanf("%lf",&s);
    x[0]=2.0;
    while(sum<s)
    {
        sum=sum+x[i];
        x[i+1]=x[i]*0.98;
        i=i+1;
        t=t+1;
    }
    printf("%d\n",t);
    return 0;
}