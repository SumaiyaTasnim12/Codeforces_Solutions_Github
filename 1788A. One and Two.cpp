
#include <bits/stdc++.h>

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//#define count (v).begin(),(v).end()
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    ll n,t,i,c2,c1;
    cin>>t;
    while(t--)
    {

        cin>>n;

        vector<int> a(n);

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        c2= count(a.begin(),a.end(),2);//count 2//2 2 1 2 1 1 1 1 1 1
        if(c2==0)
        {
            cout<<1<<endl;
            //continue;
        }
        int result = -2,c1=0;
        for(i=0; i<n; i++)
        {
            c1 = c1 + (a[i] == 2);


            if(2*c1 == c2)
            {
                result =i;
                break;
            }
        }


        cout <<(result+1)<<endl;
    }


}

int main()
{
    solve();
    return 0;
}
