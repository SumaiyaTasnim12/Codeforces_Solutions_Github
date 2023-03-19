#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {


        string s;
        cin>> s;



            if(s[0]+s[1]+s[2] == s[3]+s[4]+s[5])
            {
                cout<< "YES"<<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }
        }




}

int main()
{
    solve();
    return 0;
}

