#include<stdio.h>
int main()
{
    char a[10000];
    int t,sum=0;
    for(int i=0;;i++)
    {
        a[i]=getchar();
        if(a[i]=='\n')
        {
            break;
        }
        if(a[i]==' ')
            {
                sum=sum+1;
            }
        else if(a[i]<112)
        {
           t=(a[i]-'a'+1)%3;
        sum=sum+t;
        if(t==0)
        {
            sum=sum+3;
        }
        }
        else
        {
            if(a[i]>111)
            {
                t=a[i]-'p'+1;
                if(t<=4)
                {
                    sum=sum+t;
                }
                else if(t>4 && t<8)
                {
                    sum=sum+t-4;
                }
                else
                {
                    sum=sum+t-7;
                }
            }
    }
}
    printf("%d\n",sum);
return 0;
}