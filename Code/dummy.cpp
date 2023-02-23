#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(ll n,ll N)
{
    int count = 0;
    for(int k = 2; k <= cbrt(n); k++)
    {
        for(int i = 1; i < n;i++)
        {
            if(i*pow(k,3) <= n)
            {
                count++;
            }
            else
            {
                break;
            }
        }


    }
    return (count == N);

    
}

void solve()
{
    ll ans = 0;
    
    int N;
    cin>>N;
   
    ll start = 1;
    ll e = 1e18;
    ll mid = (start + e)/2;
    while(start<=e)
    {
        
        if(isPossible(mid,N))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            start=mid+1;
        }

        mid = start+(e-start)/2;

    }

    cout << ans <<endl;
}


int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  //int t; cin >> t;
  //while (t--)
  //{
    solve();

  //}
    
  return 0;
}