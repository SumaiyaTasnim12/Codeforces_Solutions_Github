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
      int a,c=0;
      for(int i=0;i<n;i++)
      {
          cin>>a;
          if(a == 1)
          {
              c++;
          }
      }
      cout << n-(c/2)<<endl;
  }
}

