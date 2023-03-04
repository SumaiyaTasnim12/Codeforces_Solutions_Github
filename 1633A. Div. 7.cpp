#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x = n%7;
        int y = 7-x;
        int x1 = n%10;

        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else if (x1 + y < 10)
        {
            n=n+y;
            cout<<n<<endl;
        }
        else
        {
            n=n-x;
            cout <<n<<endl;
        }


    }
}
