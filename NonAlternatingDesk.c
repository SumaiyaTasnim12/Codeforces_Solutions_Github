
#include<stdio.h>
#include<math.h>

int main()
{
    int t, n, i;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int A=0 ,B=0 ;
        for (i = 1; i <= n; i++)
        {

            if (i % 2 != 0)
            {
                A = 1;

                B = A +1 ;//2


            }

          else  if (i % 2 == 0)
            {

               B = B +1 ;//3

                A = B + 1;//4

            }
        }

 printf("%d %d\n",A,B);

    }
    return 0;
}

