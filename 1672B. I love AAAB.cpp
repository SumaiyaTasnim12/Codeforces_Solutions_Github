#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        int a=0,b=0;
        string s;

        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')a++;
            else
                b++;

        }
        if(s[0]=='B' || b>a || s[s.size()-1]!='B')
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }

}

int main()
{
    solve();
    return 0;
}

