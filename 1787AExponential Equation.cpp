
#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    ll t,n;


    cin >> t;

    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout << 1 << " "<<n/2 << endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }

}

int main()
{
    solve();
    return 0;
}
