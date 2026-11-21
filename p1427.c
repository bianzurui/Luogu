#include<stdio.h>
int main()
{
    int i,a[1000];
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
    return 0;
}