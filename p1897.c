#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x, const void *y)
{
    int p = *(const int *)x;
    int q = *(const int *)y;
    if (p < q) return -1;
    if (p > q) return 1;
    return 0;
}
int main()
{
    int n,i,a[100000],s=1,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // 快速排序，代替原来的冒泡排序
    qsort(a,n,sizeof(int),cmp);
    // 统计不同楼层的个数
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            s=s+1;
        }
    }
    sum=a[n-1]*10+n+s*5;
    printf("%d\n",sum);
    return 0;
}