#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve(){
     int  t;
     cin>>t;

while(t--)
{
    int n,m;
    cin >> n>>m;
    int  a[n];
    long long int s=0;
    for(int i=0;i<n;i++)
    {
        cin>> a[i];
        s=s+a[i];
    }
    if(s==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

}

int main(){
    solve();
    return 0;
}

