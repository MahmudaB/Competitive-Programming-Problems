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
       ll t,i,j,x,g,f=0,n,k;
       cin>>n>>x;
       vector<pair<ll,ll>>v;
       for(i=1;i<=n;i++)
       {
         cin>>a[i];
         v.push_back({a[i],i});
       }
       
       sort(v.begin(),v.end());
       
       i=0,j=n-1;
       while(i<j)
       {
         ll sum=v[i].first+v[j].first;
         if(sum<x)i++;
         else if(sum>x)j--;
         else {
           f=1;
           cout<<v[i].second<<" "<<v[j].second<<nl;
           break;
         }
       }
       
       if(!f)cout<<"IMPOSSIBLE\n";
    return 0;
}