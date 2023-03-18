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
const int mx=2e5+123;
ll a[mx];
int main()
{
       fast;
       ll t,i,j,x,n,cnt=0;
       cin>>n>>x;
       for(i=1;i<=n;i++)
         cin>>a[i];
      sort(a+1,a+n+1);
      for(i=1,j=n;i<=j;j--)
      {
         if(a[i]+a[j]<=x)i++;
         cnt++;
      }
       cout<<cnt<<nl;
    return 0;
}