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
ll a,b,c,d;
ll getValue(ll n)
{
  return (a*(n*n)+(b*n)+c);
}
int main()

{
       fast;
       ll t,i,j,x,g,type;
       cin>>t;
       while(t--)
       { 
         cin>>a>>b>>c>>d;
         ll l=0,r=(int)(1e5),ans=d;
         
         while(l<=r)
         {
           ll mid=(l+r)/2;
           if(getValue(mid)>=d)
           {
             ans=mid;
             r=mid-1;
           }
           else l=mid+1;
         }
          cout<<ans<<nl;
       }
        
    return 0;
}