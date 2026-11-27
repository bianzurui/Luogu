
#include<stdio.h>
int main()
{
    char a[1000];
    int p=0,flag=1;
    scanf("%s",a);

    for(int i=0;a[i]!='@';i++)
    {
        if(a[i]=='(')
        {
            p++;
        }
        else if(a[i]==')')
        {
            p--;
            if(p<0)
            {
                flag=0;
                break;
            }
        }
    }

    if(flag==1&&p==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
