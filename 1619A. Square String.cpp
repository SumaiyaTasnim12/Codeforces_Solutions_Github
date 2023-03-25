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
        string s,x,y;
        cin>>s;
        if(s.size()%2==0)
        {
            for(int i=0;i<s.size()/2;i++)
            {
                x=x+s[i];
            }
            for(int i=s.size()/2;i<s.size();i++)
            {
                y=y+s[i];
            }
            if(x==y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

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

