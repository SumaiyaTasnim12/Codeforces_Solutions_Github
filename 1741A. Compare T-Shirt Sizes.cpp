#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        string a,b,sa,sb;
        cin>>a>>b;
        if(a[a.size()-1] == b[b.size()-1])
        {
            if(a.size() > b.size())
            {
                if(a[a.size()-1]== 'S')
                {
                    cout << "<"<<endl;
                }
                else
                {
                    cout << ">"<<endl;
                }

            }

            else if(a.size() < b.size())
            {
                if(a[a.size()-1]== 'S')
                {
                    cout << ">"<<endl;
                }
                else
                {
                    cout << "<"<<endl;
                }

            }
            else cout<< "=" <<endl;
        }



        else
        {
            sa = a[a.size()-1]=='S'?1 : a[a.size()-1]=='M'?2:3;
            sb = b[b.size()-1]=='S'?1 : b[b.size()-1]=='M'?2:3;
            if(sa > sb)
            {
                cout << ">"<<endl;
            }
            else  if(sa < sb)
            {
                cout << "<"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }

        }

    }
}

    int main()
    {
        solve();
        return 0;
    }

