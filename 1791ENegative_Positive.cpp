#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n];
       long long sum=0,neg=0,mn= LLONG_MAX;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
         for(int i=0; i<n; i++){
            if(a[i]<0)
            {
              neg++;

            }
           sum=sum+abs(a[i]);
           mn = min(mn,abs(a[i]));
         }
         if(neg%2==1)
         {

             sum = sum-(2LL*mn);
         }

        cout<<sum<<endl;
    }
}
