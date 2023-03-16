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
ll a[mx],pr[mx];
int main()

{
         fast;
         ll i,x,n,m;
        
          cin>>n;
          for(i=1;i<=n;i++)cin>>a[i];
          
          for(i=1;i<=n;i++)
          pr[i]=pr[i-1]+a[i];
         
         cin>>m;
         while(m--)
         {
            cin>>x;

            ll l=1,r=n;
            while(l<=r)
            {
              ll mid=(l+r)/2;
              if(x>=pr[mid-1]+1 and x<=pr[mid])
              {
                cout<<mid<<nl;
                break;
              }
              if(pr[mid]<x)l=mid+1;
              else r=mid-1;
            }

         }
       
        
    return 0;
}