
#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,result=0;
        cin >> n;
        vector<ll>a(n);

        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%a[0]!=0)
            {
               result=1;
            }
        }
        if(result==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

    int main()
    {
        solve();
        return 0;
    }
