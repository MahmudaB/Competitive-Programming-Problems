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
ll n,a,b,k;

bool cal(ll m)
{
  return (k-(m*a)>(n-m)*b);
}
int main()

{
       fast;
       ll t;
       cin>>t;
       while(t--)
       { 
         cin>>k>>n>>a>>b;
         
         ll l=0,r=n,ans=-1;
         while(l<=r)
         {
           ll mid=(l+r)/2;
           if(cal(mid))
           {
             l=mid+1;
             ans=mid;
           }
           else r=mid-1;
         }
        cout<<ans<<nl;
       }
        
    return 0;
}