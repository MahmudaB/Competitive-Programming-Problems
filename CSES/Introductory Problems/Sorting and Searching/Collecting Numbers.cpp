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
int a[mx];
int main()
{
       fast;
       int t,i,j,x,g,type,n,k,diff,m,cnt=0;
       cin>>n;
       for(i=1;i<=n;i++)
        cin>>a[i];
      vector<bool>vis(n+1,0) ;
      for(i=1;i<=n;i++)
      {
        if(vis[a[i]-1]==0)
         cnt++;
        vis[a[i]]=1;
      }
      cout<<cnt<<nl;
    return 0;
}