#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

   int score = 0;

   
   int n,m;
   cin >> n ;
   string s;

   cin>> s;

   for(int i = 1 ; i <= s.length(); i++)
   {
       if(s[i-1] == 'L')
       {
         score + = i-1; 
       }
       else
       {
         score += s.length() - i;
       }
   }
   for(int i  = 1; i <= k ;i++)
   {
      //COmpare with RRR...LLL. Go from 1,N , 2, N-1, 3,N-2...
   }
}


int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--)
  {
    solve();

  }
    
  return 0;
}




