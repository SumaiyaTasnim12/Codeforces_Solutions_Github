#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve(){
     ll t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         vector<int> v;
         for(int i=0;i<s.size();i++)
         {
             v.push_back(s[i]-'0');
         }

         sort(v.begin(),v.end());

         if(s.size()==2)
         {
             cout<<s[1]<<endl;
         }
         else
         {
             cout<<v[0]<<endl;
         }
     }
}

int main(){
    solve();
    return 0;
}

