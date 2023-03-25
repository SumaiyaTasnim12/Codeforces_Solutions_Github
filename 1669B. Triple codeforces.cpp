#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve(){
     int  t;
     cin>>t;
     while(t--)
     {
         int n,c =0;
          cin >> n;
         int  a[n];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];

         }

         sort(a,a+n);

         for(int i=0;i<n;i++)
         {
             if((a[i]==a[i+1]) && (a[i]==a[i+2]))
             {
                 c =1;
                 cout<<a[i]<<endl;
                 break;
             }

         }
         if(c==0)
         {
             cout<<-1<<endl;
         }

     }

}

int main(){
    solve();
    return 0;
}

