#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a, &b, &c);
        if(b+c == a || a+c ==b || a+b ==c)
        {
            printf("YES\n");
        }
        else
        {
             printf("NO\n");
        }


    }

}
