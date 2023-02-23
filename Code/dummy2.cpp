#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

   int n;
   cin >> n;
   int curr ;
                             //iterate through all elements . if 0 then check if some element in set divides the number. if no then add number to set . else cost ++
   int arr[n];


   int sum =  0;

   for(int i  = 0 ; i < n; i++)
   {
     cin >> arr[i];
   }

   curr = arr[0];

   cout<<n-1<<endl;

   for(int i  = 2 ; i <= n; i++)
   {
      int mod = arr[i-1] % curr;
      cout<<i<<" "<<curr- mod<<endl;
      curr = max(curr,arr[i-1] + curr-mod);
      

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
