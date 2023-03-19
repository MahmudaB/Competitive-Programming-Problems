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
int main()
{
       fast;
       int t,i,x,n,m;
       cin>>n>>m;
       multiset<int>s;
      for(i=0;i<n;i++){
        cin>>x;
        s.insert(x);
      }
      while(m--)
      {
        cin>>x;
        auto it=s.upper_bound(x);
        if(it==s.begin())
        cout<<-1<<nl;
        else{
           cout<<(*--it)<<nl;
           s.erase(it);
        }
      }
    return 0;
}