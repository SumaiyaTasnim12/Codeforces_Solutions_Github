#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int x = (a[0]-'a');
         int y = (a[1]-'a');
         if(x>y)
            cout<<x*25+y+1;
         else
            cout<<x*25+y;
         cout<<endl;

    }
}
