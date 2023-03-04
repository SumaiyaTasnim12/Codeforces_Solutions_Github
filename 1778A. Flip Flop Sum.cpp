#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    ll i,n,t,ans=0,twoneg,oneneg;
    cin>>t;
    while(t--)
    {

        cin >> n;
        ll a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            ans = ans + a[i];
        }

        // bool twoneg = false,oneneg=false;
        for(i=0; i<n; i++)
        {
            if(a[i]==-1 && a[i+1]==-1)
            {
                ans = ans+2;
            }
            else if(a[i]==-1)
            {
                ans = ans-4;
            }
        }
        cout << ans << endl;
    }


}



int main()
{
    solve();
    return 0;
}
