
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        if(x>=0  && y<=9 )
        {
            cout<<x+y<<endl ;
        }
    }

    return 0;
}
