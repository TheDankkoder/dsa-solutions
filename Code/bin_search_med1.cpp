#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(ll n,ll N)
{
    int count = 0;
    for(int k = 2; k*k*k <= n; k++)
    {
        count += n / (k*k*k);

    }
    return (count == N);

    
}

void solve()
{

    
    
    int n,Q;
    cin>>n >> Q;
    int a[n];
    int q[Q];

    for(int i = 0 ;i<n;i++)
    {
        cin >>a[i];
    }

    for(int i = 0 ; i<Q;i++)
    {
        cin >> q[i];
    }

    sort(a,a+n);

    for(int i = 0 ;i< Q; i++)
    {
        ll ans = 0;

        int term = q[i];
        ll start = 0;
        ll e = n-1;
        ll mid = (start + e)/2;
        while(start<=e)
        {
        
           if(term >= a[mid])
          {
            ans += a[mid];
            e = mid-1;
          }

          else
          {
            start=mid+1;
          }

          mid = start+(e-start)/2;
 
       }
       cout << ans<<" ";

    }
    cout<<endl;
    

    
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