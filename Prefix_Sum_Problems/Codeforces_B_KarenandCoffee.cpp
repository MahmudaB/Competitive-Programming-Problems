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
int prf[mx],b[mx],ans[mx];
int main()
{
       fast;
       int q,i,j,x,g,type,n,k,diff,l,r;
       cin>>n>>k>>q;
       for(i=1;i<=n;i++){
        cin>>l>>r;
        b[l]++,b[r+1]--;
       }
       for(i=1;i<=200001;i++)
        prf[i]=prf[i-1]+b[i];
        for(i=1;i<=200001;i++){
          if(prf[i]>=k)
            ans[i]=ans[i-1]+1;
          else ans[i]=ans[i-1];
        }
      while(q--)
      {
         cin>>i>>j;
         cout<<ans[j]-ans[i-1]<<nl;
      }
        
    return 0;
}