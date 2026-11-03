#include<stdio.h>
int main()
{
    int n,k,cnt;
    scanf("%d %d",&n,&k);
    cnt=n+(n-1)/(k-1);
    printf("%d",cnt);
    return 0;
}