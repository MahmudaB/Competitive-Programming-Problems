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
const int mx=1e5+123;
ll pre[mx],a[mx];
int main()

{
       fast;
       ll t,i,j,x=1,g,type,n,k,diff,m;
       cin>>t;
       while(t--)
       { 
         cin>>n>>m;
         for(i=1;i<=n;i++)
         {
           cin>>a[i];
           pre[i]=pre[i-1]+a[i];
         }
         map<ll,ll>mp;
         ll cnt=0;
         mp[0]++;
         for(i=1;i<=n;i++)
          pre[i]%=m,mp[pre[i]]++;
          
        for(i=n;i>=1;i--)
        {
          mp[pre[i]]--;
          cnt+=mp[pre[i]];
        }
        case(x);
        x++;
        cout<<cnt<<nl;
       }
        
    return 0;
}