#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0
using namespace std;
void solve(){
     ll t,n;
     cin>>t;
     while(t--)
     {
         cin>>n;
         string s1,s2;
         cin>>s1>>s2;
         for(int i=0;i<n;i++)
         {
             if(s1[i]=='G')s1[i]='B';
             if(s2[i]=='G')s2[i]='B';
         }
         if(s1==s2)
         {
             cout<<"YES"<<endl;
         }
         else
             cout<<"NO"<<endl;
    }
}
int main(){
    solve();
    return 0;
}

