#include<stdio.h>
int main()
{
    int k,i;
    double Sn=0;
    scanf("%d",&k);
    for(i=1;Sn<=k;i++)
    {
         Sn+=1.0/i;
    }
    printf("%d",i-1);
    return 0;
}