#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double t,t1,t2,a=1,b=1;
    scanf("%d",&n);
    t1=(1+sqrt(5))/2;
    t2=(1-sqrt(5))/2;
    for(int i=0;i<n;i++)
    {
        a=a*t1;
        b=b*t2;
    }
    t=(a-b)/sqrt(5);
    printf("%.2f\n",t);
    return 0;
}