
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
        string s;
        cin>>s;
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else if (n==2){
            if(s[0]==s[1])
            {
                cout <<"NO"<<endl;
            }
            else
            {
               cout <<"YES"<<endl;
            }
        }
        else
        {
             cout <<"NO"<<endl;
        }


    }







}

int main(){
    solve();
    return 0;
}
