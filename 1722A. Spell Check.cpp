#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin >> n;
        string s;
        cin>>s;
        if(n!=5)
        {
            cout<<"NO"<<endl;
            continue;
        }

        sort(s.begin(),s.end());
        if(s=="Timru")
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

