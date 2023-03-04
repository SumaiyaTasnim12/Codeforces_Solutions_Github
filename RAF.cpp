#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve(){
     int t;
     cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        if(ar[0]==ar[n-1])cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<ar[0]<<" ";
            for(int i=n-1;i>0;i--)cout<<ar[i]<<" ";
            cout<<endl;
        }
    }



}

int main(){
    solve();
    return 0;
}
