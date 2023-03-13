//In the name of Almighty Allah
#include<bits/stdc++.h>

using namespace std;

#define mod 1e9+7

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define case(z) cout<<"Scenario #"<<z<<": "

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
const int mx=1e6+123;
ll a[mx],n;

bool cal(ll val)
{
  for(ll j=1;j<=n;j++)
  {
    val+=a[j];
    if(val<=0)
     return false;
  }
   
   return true;
}
int main()

{
       fast;
       ll t,i,k=1;
       cin>>t;
       while(t--)
       { 
         cin>>n;
         for(i=1;i<=n;i++)
          cin>>a[i];
          
        ll l=1,r=1e13,ans=r;
        
        while(l<=r)
        {
          ll mid=(l+r)/2;
          if(cal(mid))
          {
            ans=mid;
            r=mid-1;
          }
          else l=mid+1;
        }
        case(k);
        cout<<ans<<nl;
        k++;
       }
        
    return 0;
}