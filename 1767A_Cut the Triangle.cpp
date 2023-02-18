#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        int a1,a2;
        cin >> a1 >> a2;
        int a3,a4;
        cin >>a3 >> a4;
        int a5,a6;
        cin >> a5 >> a6;
        if((a1==a3 || a1==a5 || a3==a5)&&
                (a2==a4 || a4==a6 || a2==a6))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

    }
}

/*
case1 : no same x/y coordinate -----yes
case2 : one same x/y coordinate ----yes
case3 :one same y && one same x ----NO

*/
