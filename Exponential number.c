#include<stdio.h>
int main()
{
    long long int t,n,i,j,temp,f=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=1; j<n; j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }


            }




            for(i=0; i<n; i++)
            {
                if(a[i]==a[i+1])
                {
                    f=1;

                }

            }
            if(f==0)
            {
                printf("YES\n");
            }
            else if(f==1)
            {
                printf("NO\n");
            }





        }
    }
}
