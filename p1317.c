#include<stdio.h>

int main()
{
    int n,a[10000],i,j,sum=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            j=i+1;

            while(j+1<n && a[j+1]<=a[j])
            {
                j++;
            }

            if(j+1<n && a[j+1]>a[j])
            {
                sum++;
                i=j;
            }
        }
    }

    printf("%d\n",sum);

    return 0;
}
