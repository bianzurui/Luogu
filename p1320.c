#include<stdio.h>
int main()
{
    char a[50000];
    int i=0,ch,len;
    int sum=0,flag=0,p=0,q=0;
    // 读取所有字符
    while((ch=getchar())!=EOF)
    {
        a[i]=ch;
        i++;
    }
    len=i;
    // 统计第一行的长度
    while(sum<len&&a[sum]!='\n'&&a[sum]!='\r')
    {
        sum++;
    }
    printf("%d ",sum);
    // 统计连续的0和1
    for(i=0;i<len;i++)
    {
        if(a[i]=='\n'||a[i]=='\r')
        {
            continue;
        }
        if(a[i]=='0')
        {
            if(flag==1)
            {
                printf("%d ",q);
                q=0;
                flag=0;
            }
            p++;
        }
        else if(a[i]=='1')
        {
            if(flag==0)
            {
                printf("%d ",p);
                p=0;
                flag=1;
            }
            q++;
        }
    }
    // 输出最后一组
    if(flag==0)
    {
        printf("%d\n",p);
    }
    else
    {
        printf("%d\n",q);
    }
    return 0;
}
