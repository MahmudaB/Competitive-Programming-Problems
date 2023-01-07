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
int a[mx];
int main()

{
       fast;
       int t,i,j,x,q,type,n,k,diff,m;
       cin>>t;
       while(t--)
       {
         int forward[mx]={0},backward[mx]={0};
         cin>>n>>q;
         for(i=1;i<=n;i++)
         {
           cin>>a[i];
           forward[i]=gcd(forward[i-1],a[i]);
         }
         for(i=n;i>=1;i--)
           backward[i]=gcd(backward[i+1],a[i]);
         while(q--)
         {
           int l,r;
           cin>>l>>r;
           cout<<gcd(forward[l-1],backward[r+1])<<nl;
         }
       }
        
    return 0;
}