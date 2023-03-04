#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve(){
     ll t,i;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         for(i=0;i<3;i++)
         {
             s[i]= toupper(s[i]);
         }
         if(s=="YES")
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

