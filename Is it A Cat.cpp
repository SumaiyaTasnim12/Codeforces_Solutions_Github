#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;




void solve()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string M="MEOW";
        for(int i=0; i<n; i++)
        {
            //if(s[i]>=97)s[i]-=32;
            s[i]= toupper(s[i]);
        }
        string ss="";

        for(int i=0; i<n; i++)
        {
            if(ss.empty() || ss.back()!=s[i])
            {
                ss.push_back(s[i]);
            }
        }

        if(ss==M)
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


