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
const int mx=1e7+123;
ll a[mx],pr[mx];
int main()

{
       fast;
       ll t,i,j,x,q,type,n,k,diff,a,b;
        cin>>n>>q;
        while(q--)
        {
          cin>>a>>b>>k;
          pr[a]+=k,pr[b+1]-=k;
        }
        for(i=1;i<=n;i++)
         pr[i]+=pr[i-1];
        cout<<*max_element(pr+1,pr+n+1)<<nl;
       
        
    return 0;
}