
#include <bits/stdc++.h>

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solution(){
    ll t,i,n,s,r,temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>r;
        cout<<s-r<<" ";
        if(r%(n-1)==0)
        {
            for(i=0;i<n-1;i++)
            {
                cout<<r/(n-1)<< " ";
            }
        }
        else
        {
            temp=r%(n-1);

             for(i=0;i<n-1-temp;i++)
            {
                cout<<r/(n-1)<< " ";
            }
             for(i=0;i<temp;i++)
            {
                cout<<r/(n-1)+1<< " ";
            }

        }
        cout<<endl;
    }


}

int main(){
    solution();
    return 0;
}
