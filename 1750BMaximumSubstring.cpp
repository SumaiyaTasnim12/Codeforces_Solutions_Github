#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
       long long n;
        cin>>n;
        string s;
        cin>>s;
        long long one=0,zero=0;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='0') zero++;
           else one++;
        }
       long long ans = zero*one;
        long long o=0;
        long long z = 0;
        long long maxo = 0,maxz=0;
         for(int i=0;i<n;i++)
        {
           if(s[i]=='1')
           {
               o++;
               maxo = max(maxo,o);
        }
        else o=0;
        }
        for(int i=0;i<n;i++)
        {
           if(s[i]=='0'){
                z++;
            maxz = max(maxz,z);
           }
           else z=0;

        }

        maxo=maxo*maxo;
        maxz=maxz*maxz;
       long long result = max({ans,maxo,maxz});
         cout<<result<<endl;


    }


}

