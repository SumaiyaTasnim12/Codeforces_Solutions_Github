#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    ll n,t,i;
    cin>>t;
    while(t--){
       cin >> n;
    set<int> arr;
    for(i=1;i*i<=n;i++)
    {
       arr.insert(i*i);
    }
    for(i=1;i*i*i<=n;i++)
    {
       arr.insert(i*i*i);
    }
    cout<<arr.size()<<endl;

    }






}

int main()
{
    solve();
    return 0;
}
