#include<stdio.h>
#include <string.h>
#define PI "314159265358979323846264338327"
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       char a[35];
        scanf("%s",&a);
        int len = strlen(a);
        int i;
        for(i=0;i<len;i++)
        {
            if(PI[i]!=a[i])
            {
               break;
            }

        }
        printf("%d\n", i);
    }
}
