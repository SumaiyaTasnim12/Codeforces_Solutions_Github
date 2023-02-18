

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define endl "\n"

void solve(){
   ll n; cin>>n;
   string s; cin>>s;
   ll l=0,r=n-1;
   ll ans=n;
   while(l<=r){
       if((s[l]=='1' and s[r]=='0') or (s[l]=='0' and s[r]=='1') ){
           ans-=2;
           l++;
           r--;
       }
       else{
           cout<<ans<<endl;
           return;
       }
   }

   cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll t; cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
