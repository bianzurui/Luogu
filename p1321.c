#include<stdio.h>
int main()
{
    char a[10000]={0};
    int x=0,y=0;
    for(int i=1;;i++)
    {
        a[i]=getchar();
        if(a[i]=='\n')
        {
            break;
        }
        if(a[i]=='o'&&a[i-1]!='b' || a[i]=='y'&&a[i-1]!='o' ||a[i]=='b')
        {
            x++;
        }
        if(a[i]=='i'&&a[i-1]!='g' || a[i]=='r'&&a[i-1]!='i' || a[i]=='l'&&a[i-1]!='r' || a[i]=='g')
        {
            y++;
        }
    }
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;    
}