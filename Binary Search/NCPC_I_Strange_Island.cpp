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
ll a[mx];
int main()

{
       fast;
       ll t,i,j,x=1,g,type,n,k,diff,m;
       cin>>t;
       while(t--)
       { 
         cin>>n>>m>>k;
         for(i=1;i<=m;i++)cin>>a[i];
         
         ll l=1,r=n,ans=0;
         while(l<=r)
         {
           ll mid=(l+r)/2,cnt=1,sum=a[1]+mid;
           for(i=2;i<=m;i++)
           {
             if(abs(sum-a[i])>mid)
             {
               cnt++,sum=a[i]+mid;
             }
           }
           if(cnt>k)l=mid+1;
           else ans=mid,r=mid-1;
         }
         case(x),x++;
         if(k>=m)cout<<0<<nl;
         else cout<<ans<<nl;
       }
        
    return 0;
}