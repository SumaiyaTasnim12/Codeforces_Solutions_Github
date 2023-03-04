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
         ll r,b,d,maximum,minimum;
         cin>>r>>b>>d;
         maximum = max(r,b);
         minimum = min(r,b);
         if((d+1)*minimum >=maximum )
         {
            cout << "YES"<< endl;
         }
         else
         {
             cout << "NO"<<endl;
         }


     }
}

int main(){
    solve();
    return 0;
}

