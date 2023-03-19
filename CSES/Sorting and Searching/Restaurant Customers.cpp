//In the name of Almighty Allah
#include<bits/stdc++.h>

using namespace std;

#define mod 1e9+7

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define case(z) cout<<"Case "<<z<<": "

#define ll long long

#define nl "\n"

#define NO cout << "NO" << endl;

#define Yes cout << "Yes" << endl;

#define No cout << "No" << endl;

#define yes cout << "yes" << endl;

#define no cout << "no" << endl;

#define YES cout << "YES" << endl;
ll gcd(ll a,ll b){
	 return __gcd(a,b);
}

ll lcm(ll a,ll b){
	 return (a*(b/gcd(a,b)));
}
const int mx=123;

int main()
{
       fast;
       ll t,i,n,start,end;
       cin>>n;
       vector<pair<ll,ll>>v;
       for(i=1;i<=n;i++)
       {
         cin>>start>>end;
         v.push_back({start,1});
         v.push_back({end,-1});
       }
       sort(v.begin(),v.end());
  
      ll sum=0,ans=0;
      for(auto x:v)
      {
        sum+=x.second;
        ans=max(ans,sum);
      }
      cout<<ans<<nl;
        
    return 0;
}