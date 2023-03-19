#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0
#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")
#define     nl                              printf("\n")

using namespace std;

void solve(){
     int t;
     cin>>t;
     while(t--)
     {
         int  a,b,c,x,y;
         cin>>a>>b>>c>>x>>y;
         x = max(0,x-a);
         y = max(0,y-b);
          (c>=x+y)?YES:NO;
     }
}

int main(){
    solve();
    return 0;
}

